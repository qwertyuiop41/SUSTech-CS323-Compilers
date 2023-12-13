#include "semantic.hpp"
#include <stdlib.h>
#include <stdio.h>
unordered_map<string, SemanticType *> symbol_table;

/// Basic Idea: top-down traversal of the syntax tree
/// For Each NonTerminal, we have a function to analyze it
/// just like recursive descent parsing

// Program : ExtDefList {$$ = new Node("Program", 1, @$.first_line, $1); if(has_error == 0) {semantic_analyze($$);}}
void semantic_analyze(Node *program)
{
    analyze_ext_def_list(nextNode(program));
}

void analyze_ext_def_list(Node *ext_def_list)
{
    // ExtDefList : {$$ = new Node("ExtDefList", 0, @$.first_line);};
    if (ext_def_list->nodes_num == 0)
        return;
    // | ExtDef ExtDefList {$$ = new Node("ExtDefList", 2, @$.first_line, $1, $2);}
    Node *ext_def = nextNode(ext_def_list);
    Node *ext_def_list1 = nextNode(ext_def_list);
    analyze_ext_def(ext_def);
    analyze_ext_def_list(ext_def_list1);
}

// ExtDef : Specifier ExtDecList SEMI {$$=new Node("ExtDef", 3, @$.first_line, $1, $2, $3);}
void analyze_ext_def(Node *ext_def)
{
    Node *specifier = nextNode(ext_def);
    SemanticType *spec_type = analyze_specifier(specifier);
    Node *next = nextNode(ext_def);
    if (next->name == "ExtDecList")
    {
    // ExtDef : Specifier ExtDecList SEMI {$$=new Node("ExtDef", 3, @$.first_line, $1, $2, $3);}
        Node *ext_dec_list = next;
        nextNode(ext_dec_list);
        analyze_ext_dec_list(ext_dec_list, spec_type);
    } else if (next->name == "SEMI")
    {
        // ExtDef : Specifier SEMI {$$=new Node("ExtDef", 2, @$.first_line, $1, $2);}
        // do nothing
        return;
    }
    else if (next->name == "FunDec")
    {
        // | Specifier FunDec CompSt {$$=new Node("ExtDef", 3, @$.first_line, $1, $2, $3);}
        Node *fun_dec = next;
        Node *comp_st = nextNode(ext_def);
        SemanticType *fun_dec_type = analyze_fun_dec(fun_dec, spec_type);

        if (fun_dec_type != nullptr)
        {
            string func_name = fun_dec_type->params_ptr->name;
            if (symbol_table.count(func_name))
            {
                my_error(MY_ERROR_TYPE::REDEFINED_FUNC, fun_dec->line_num, func_name.c_str());
            }
            else
            {
                symbol_table[func_name] = fun_dec_type;
                analyze_comp_st(comp_st, spec_type);
            }
        }
    }
}

SemanticType *analyze_specifier(Node *specifier)
{
// /* specifier */
// Specifier: TYPE  {$$=new Node("Specifier", 1, @$.first_line, $1);}
// | StructSpecifier  {$$=new Node("Specifier", 1, @$.first_line, $1);}
// ;

// StructSpecifier: STRUCT ID LC DefList RC {$$=new Node("StructSpecifier", 5, @$.first_line, $1, $2, $3, $4, $5);}
// | STRUCT ID {$$=new Node("StructSpecifier", 2, @$.first_line, $1, $2);}
// | STRUCT ID LC DefList error {my_error(MISS_RC, @$.first_line); has_error=1;}
// ;
    SemanticType *type_ = nullptr;
    Node *type = nextNode(specifier);
    if (type->nodetype == NodeType::Type)
    {
        if (!strcmp(type->char_value, "int"))
        {
            type_ = new SemanticType(Category::PRIMITIVE, NodeType::Int);
        }
        else if (!strcmp(type->char_value, "float"))
        {
            type_ = new SemanticType(Category::PRIMITIVE, NodeType::Float);
        }
        else
        {
            type_ = new SemanticType(Category::PRIMITIVE, NodeType::Char);
        }
    }
    else if (type->name == "StructSpecifier")
    {
        Node *_struct = nextNode(type);
        Node *struct_id = nextNode(type);
        char *struct_name = struct_id->char_value;

        if (type->nodes_num != 2)
        {
            if (symbol_table.count(struct_name))
            {
                my_error(MY_ERROR_TYPE::REDEFINED_STRUCT, struct_id->line_num, struct_name);
                return nullptr;
            }
            nextNode(type);
            Node *def_list = nextNode(type);
            nextNode(type);
            ParamList *params_ptr = analyze_def_list(def_list, nullptr);
            type_ = new SemanticType(Category::STRUCTURE, params_ptr);
            symbol_table[string(struct_name)] = type_;
        }
        else
        {

            if (symbol_table.count(struct_name) == 0)
            {
                my_error(MY_ERROR_TYPE::UNDEFINED_VARIABLE, struct_id->line_num, struct_name);
                return nullptr;
            }
            if (symbol_table[struct_name]->category != Category::STRUCTURE)
            {
                my_error(MY_ERROR_TYPE::STRUCT_MISMATCH, struct_id->line_num, struct_name);
                return nullptr;
            }
            type_ = symbol_table[struct_name];
        }
    }
    return type_;
}

ParamList *analyze_def_list(Node *def_list, ParamList *params)
{
// /* local definition */ 
// deflist: {$$ = new node("deflist", 0, @$.first_line);};
// | def deflist {$$=new node("deflist", 2, @$.first_line, $1, $2);}
// ; 
    if (def_list->nodes_num == 0)
    {
        return params;
    }

    Node *def = nextNode(def_list);
    if (params == nullptr)
    {
        params = analyze_def(def, params);
    }
    else
    {
        params->next = analyze_def(def, params);
    }
    analyze_def_list(nextNode(def_list), params);
    return params;
}

ParamList *analyze_def(Node *def, ParamList *para)
{
// Def: Specifier DecList SEMI {$$=new Node("Def", 3, @$.first_line, $1, $2, $3);}
// | Specifier DecList error{my_error(MISS_SEMI, @$.first_line); has_error=1;}
// | error DecList SEMI {my_error(MISS_SPEC, @$.first_line +1); has_error=1;}
// ;
    Node *specifier = nextNode(def);
    Node *dec_list = nextNode(def);

    SemanticType *type_ = analyze_specifier(specifier);

    para = analyze_dec_list(dec_list, para, type_);

    return para;
}

ParamList *analyze_dec_list(Node *dec_list, ParamList *para, SemanticType *type_)
{

    Node *dec = nextNode(dec_list);

    para = analyze_dec(dec, para, type_);
    if (dec_list->nodes_num != 1)
    {

        Node *_COMMA = nextNode(dec_list);
        Node *dec_list1 = nextNode(dec_list);
        para = analyze_dec_list(dec_list1, para, type_);
    }
    return para;
}

ParamList *analyze_dec(Node *dec, ParamList *para, SemanticType *type_)
{
// Dec: VarDec {$$=new Node("Dec", 1, @$.first_line, $1);}
// | VarDec ASSIGN Exp  {$$=new Node("Dec", 3, @$.first_line, $1, $2, $3);}
// ;
    Node *var_dec = nextNode(dec);
    ParamList *var_dec_fields = analyze_var_dec(var_dec, type_);

    if (dec->nodes_num != 1)
    {
        Node *_ASSIGN = nextNode(dec);
        Node *exp = nextNode(dec);
        SemanticType *exp_type = analyze_exp(exp);
        if (!type_eq(type_, exp_type))
        {
            my_error(MY_ERROR_TYPE::ASSIGN_UNMATCH, var_dec->line_num);
        }
    }
    return var_dec_fields;
}

ParamList *analyze_var_dec(Node *var_dec, SemanticType *type_)
{
// Dec: VarDec {$$=new Node("Dec", 1, @$.first_line, $1);}
// | VarDec ASSIGN Exp  {$$=new Node("Dec", 3, @$.first_line, $1, $2, $3);}
// ;
    SemanticType *param_type = type_;
    Node *next_node = nullptr;
    while (var_dec->nodes_num == 4)
    {
        next_node = nextNode(var_dec);
        Node *_LB = nextNode(var_dec);
        Node *int_node = nextNode(var_dec);
        Node *_RB = nextNode(var_dec);

        Array *newarray = new Array(param_type, int_node->int_value);
        SemanticType *newtype = new SemanticType(Category::ARRAY, newarray);

        param_type = newtype;
        var_dec = next_node;
    }
    Node *id = nextNode(var_dec);
    ParamList *result = new ParamList(id->char_value, param_type, nullptr);
    if (symbol_table.count(result->name))
    {
        my_error(MY_ERROR_TYPE::REDEFINED_VARIABLE, id->line_num, result->name.c_str());
    }
    symbol_table[result->name] = param_type;

    return result;
}

void analyze_var_list(Node *var_list, ParamList *param)
{

    Node *param_dec = nextNode(var_list);

    param = analyze_param_dec(param_dec, param);
    if (var_list->nodes_num != 1)
    {
        Node *_COMMA = nextNode(var_list);
        Node *var_list1 = nextNode(var_list);
        analyze_var_list(var_list1, param);
    }
}

ParamList *analyze_param_dec(Node *param_dec, ParamList *param)
{

    Node *specifier = nextNode(param_dec);
    SemanticType *spec = analyze_specifier(specifier);
    if (spec != nullptr)
    {
        Node *var_dec = nextNode(param_dec);
        ParamList *temp = analyze_var_dec(var_dec, spec);
        param->next = temp;
        param = temp;
    }
    return param;
}

SemanticType *analyze_assignment(Node *exp1, Node *_ASSIGN, Node *exp2)
{

    SemanticType *type_ = nullptr;
    SemanticType *exp1_type = analyze_exp(exp1);
    SemanticType *exp2_type = analyze_exp(exp2);
    bool flag = false;
    switch (exp1->nodes_num)
    {
    case 1:
    {
        Node *id = nextNode(exp1);
        if (id->nodetype == NodeType::Id)
        {
            flag = true;
        }
        break;
    }
    case 3:
    {
        Node *exp = nextNode(exp1);
        Node *_DOT = nextNode(exp1);
        Node *id = nextNode(exp1);
        if (exp->name == "Exp" && _DOT->name == "DOT" && id->nodetype == NodeType::Id)
        {
            flag = true;
        }
        break;
    }
    case 4:
    {
        Node *lhs_exp1 = nextNode(exp1);
        Node *_LB = nextNode(exp1);
        Node *lhs_exp2 = nextNode(exp1);
        Node *_RB = nextNode(exp1);
        if (lhs_exp1->name == "Exp" && _LB->name == "LB" && lhs_exp2->name == "Exp" && _RB->name == "RB")
        {
            flag = true;
        }
        break;
    }
    }
    if (!flag)
    {
        my_error(MY_ERROR_TYPE::RVALUE_ERROR, exp1->line_num);
    }
    else if (!type_eq(exp1_type, exp2_type))
    {

        my_error(MY_ERROR_TYPE::ASSIGN_UNMATCH, _ASSIGN->line_num);
    }
    else
    {
        type_ = exp1_type;
    }

    return type_;
}

SemanticType *analyze_exp(Node *exp)
{
    SemanticType *type_ = nullptr;
    if (exp->nodes_num == 1)
    {
        Node *node1 = nextNode(exp);
        if (node1->nodetype == NodeType::Id)
        {
            if (symbol_table.count(node1->char_value) == 0)
            {
                my_error(MY_ERROR_TYPE::UNDEFINED_VARIABLE, node1->line_num, node1->char_value);
            }
            else
            {
                type_ = symbol_table[node1->char_value];
            }
        }
        else
        {
            return getPrimitiveType(node1);
        }
    }
    else if (exp->nodes_num == 2)
    {
        Node *node1 = nextNode(exp);
        Node *node2 = nextNode(exp);
        SemanticType *exp_type = analyze_exp(node2);
        if (node1->name == "NOT")
        {
            if (!(exp_type->category == Category::PRIMITIVE && exp_type->nodetype == NodeType::Int))
            {
                my_error(MY_ERROR_TYPE::UNMATCH_OPERAND, node1->line_num);
            }
            else
            {
                type_ = new SemanticType(Category::PRIMITIVE, NodeType::Int);
            }
        }
        else if (node1->name == "MINUS")
        {
            if (exp_type->category != Category::PRIMITIVE || exp_type->nodetype == NodeType::Char)
            {
                my_error(MY_ERROR_TYPE::UNMATCH_OPERAND, node1->line_num);
            }
            else
            {
                type_ = exp_type;
            }
        }
    }
    else if (exp->nodes_num == 3)
    {
        Node *node1 = nextNode(exp);
        Node *node2 = nextNode(exp);
        Node *node3 = nextNode(exp);
        if (node2->name == "ASSIGN")
        {
            type_ = analyze_assignment(node1, node2, node3);
        }
        else if (node2->name == "AND" || node2->name == "OR")
        {
            Node *exp1 = node1;
            Node *exp2 = node3;
            SemanticType *exp1_type = analyze_exp(exp1);
            SemanticType *exp2_type = analyze_exp(exp2);
            if (!type_eq(exp1_type, exp2_type) ||
                !(exp1_type->category == Category::PRIMITIVE && exp1_type->nodetype == NodeType::Int))
            {
                my_error(MY_ERROR_TYPE::UNMATCH_OPERAND, node2->line_num);
            }
            else
            {
                type_ = exp1_type;
            }
        }
        else if (node2->name == "LT" ||
                 node2->name == "LE" ||
                 node2->name == "GT" ||
                 node2->name == "GE" ||
                 node2->name == "NE" ||
                 node2->name == "EQ" ||
                 node2->name == "PLUS" ||
                 node2->name == "MINUS" ||
                 node2->name == "MUL" ||
                 node2->name == "DIV")
        {
            Node *exp1 = node1;
            Node *exp2 = node3;
            SemanticType *exp1_type = analyze_exp(exp1);
            SemanticType *exp2_type = analyze_exp(exp2);
            if (!type_eq(exp1_type, exp2_type) || exp1_type->category != Category::PRIMITIVE)
            {
                my_error(MY_ERROR_TYPE::UNMATCH_OPERAND, node1->line_num);
            }
            else
            {
                type_ = exp1_type;
            }
        }
        else if (node2->name == "DOT")
        {
            Node *exp1 = node1;
            Node *member_id = node3;
            SemanticType *exp1_type = analyze_exp(exp1);

            if (exp1_type->category != Category::STRUCTURE)
            {
                my_error(MY_ERROR_TYPE::DOT_ERROR, exp1->line_num);
            }
            else
            {
                ParamList *param = nullptr;
                for (param = exp1_type->params_ptr; param != nullptr; param = param->next)
                {
                    if (param->name == string(member_id->char_value))
                        break;
                }
                if (param == nullptr)
                {
                    my_error(MY_ERROR_TYPE::UNDEFINED_STRUCT_MEMBER, member_id->line_num, member_id->char_value);
                }
                else
                {
                    type_ = param->type_;
                }
            }
        }
        else if (node1->name == "LP")
        {
            type_ = analyze_exp(node2);
        }
        else if (node1->nodetype == NodeType::Id)
        {
            if (symbol_table.count(node1->char_value) == 0)
            {
                my_error(MY_ERROR_TYPE::UNDEFINED_FUNC, node1->line_num, node1->char_value);
                return nullptr;
            }
            else if (symbol_table[node1->char_value]->category != Category::FUNCTION)
            {
                my_error(MY_ERROR_TYPE::FUNC_INVOKE_ERROR, node1->line_num, node1->char_value);
                return nullptr;
            }
            SemanticType *func_type = symbol_table[node1->char_value];
            if (func_type->params_ptr->next == nullptr)
            {
                type_ = func_type->params_ptr->type_;
            }
            else
            {
                my_error(MY_ERROR_TYPE::ARGS_MISMATCH, node1->line_num, node1->char_value);
            }
        }
    }
    else if (exp->nodes_num == 4)
    {
        Node *node1 = nextNode(exp);
        Node *node2 = nextNode(exp);
        Node *node3 = nextNode(exp);
        Node *node4 = nextNode(exp);
        if (node1->nodetype == NodeType::Id)
        {
            if (symbol_table.count(node1->char_value) == 0)
            {
                my_error(MY_ERROR_TYPE::UNDEFINED_FUNC, node1->line_num, node1->char_value);
                return nullptr;
            }
            else if (symbol_table[node1->char_value]->category != Category::FUNCTION)
            {
                my_error(MY_ERROR_TYPE::FUNC_INVOKE_ERROR, node1->line_num, node1->char_value);
                return nullptr;
            }
            SemanticType *func_type = symbol_table[node1->char_value];
            type_ = analyze_args(node3, func_type, node1);
        }
        else if (node2->name == "LB")
        {
            Node *exp1 = node1;
            Node *exp2 = node3;
            SemanticType *exp1_type = analyze_exp(exp1);
            SemanticType *exp2_type = analyze_exp(exp2);
            if (exp1_type->category != Category::ARRAY)
            {
                my_error(MY_ERROR_TYPE::INDEX_OPERATOR_ERROR, node1->line_num);
            }
            else if (!(exp2_type->category == Category::PRIMITIVE && exp2_type->nodetype == NodeType::Int))
            {
                my_error(MY_ERROR_TYPE::INDEX_TYPE_ERROR, exp2->line_num);
                type_ = exp1_type->array_ptr->base;
            }
            else
            {
                type_ = exp1_type->array_ptr->base;
            }
        }
    }
    return type_;
}

SemanticType *analyze_args(Node *args, SemanticType *func_type, Node *id)
{

    ParamList *args_type = func_type->params_ptr->next;
    SemanticType *type_ = nullptr;
    if (args_type == nullptr)
    {
        my_error(MY_ERROR_TYPE::ARGS_MISMATCH, id->line_num, id->char_value);
        return type_;
    }
    Node *exp = nextNode(args);
    while (true)
    {
        SemanticType *exp_type = analyze_exp(exp);
        if (exp_type != nullptr)
        {

            if (!type_eq(exp_type, args_type->type_))
            {
                my_error(MY_ERROR_TYPE::ARGS_MISMATCH, id->line_num, id->char_value);
                break;
            }
            args_type = args_type->next;
            if (args_type == nullptr && args->nodes_num == 1)
            {
                type_ = func_type->params_ptr->type_;
                break;
            }
            if (args_type != nullptr && args->nodes_num == 1)
            {
                my_error(MY_ERROR_TYPE::ARGS_MISMATCH, id->line_num, id->char_value);
                break;
            }
            if (args_type == nullptr && args->nodes_num != 1)
            {

                my_error(MY_ERROR_TYPE::ARGS_MISMATCH, id->line_num, id->char_value);
                break;
            }
            Node *_COMMA = nextNode(args);
            args = nextNode(args);
            exp = nextNode(args);
        }
        else
        {
            break;
        }
    }

    return type_;
}

SemanticType *analyze_fun_dec(Node *fun_dec, SemanticType *param_type)
{
    Node *func_id = nextNode(fun_dec);
    if (symbol_table.count(func_id->char_value) != 0)
    {
        my_error(MY_ERROR_TYPE::REDEFINED_FUNC, func_id->line_num, func_id->char_value);
    }
    ParamList *param = new ParamList(func_id->char_value, param_type, nullptr);
    SemanticType *type_ = new SemanticType(Category::FUNCTION, param);
    if (fun_dec->nodes_num == 3)
    {
        param->next = nullptr;
    }
    else
    {
        Node *_lp = nextNode(fun_dec);
        Node *var_list = nextNode(fun_dec);
        Node *_rp = nextNode(fun_dec);
        analyze_var_list(var_list, param);
    }
    return type_;
}

void analyze_comp_st(Node *compst, SemanticType *ret_type)
{
    Node *_lc = nextNode(compst);
    Node *def_list = nextNode(compst);
    Node *stmt_list = nextNode(compst);
    Node *_rc = nextNode(compst);
    analyze_def_list(def_list, nullptr);
    analyze_stmt_list(stmt_list, ret_type);
}

void analyze_stmt_list(Node *stmt_list, SemanticType *ret_type)
{
    if (stmt_list->nodes_num != 0)
    {
        Node *stmt = nextNode(stmt_list);
        Node *stmt_list1 = nextNode(stmt_list);
        analyze_stmt(stmt, ret_type);
        analyze_stmt_list(stmt_list1, ret_type);
    }
}

void analyze_stmt(Node *stmt, SemanticType *ret_type)
{
    Node *node1 = nextNode(stmt);
    if (node1->name == "Exp")
    {
        analyze_exp(node1);
    }
    else if (node1->name == "CompSt")
    {
        analyze_comp_st(node1, ret_type);
    }
    else if (node1->name == "RETURN")
    {
        Node *exp = nextNode(stmt);
        SemanticType *exp_type = analyze_exp(exp);
        if (exp_type != nullptr && !type_eq(ret_type, exp_type))
        {

            my_error(MY_ERROR_TYPE::RETURN_VALUE_MISMATCH, node1->line_num);
        }
    }
    else if (node1->name == "IF")
    {
        Node *_lp = nextNode(stmt);
        Node *exp = nextNode(stmt);
        Node *_rp = nextNode(stmt);
        Node *stmt1 = nextNode(stmt);
        SemanticType *exp_type = analyze_exp(exp);
        if (exp_type != nullptr)
        {
            if (!(exp_type->category == Category::PRIMITIVE && exp_type->nodetype == NodeType::Int))
            {
                my_error(MY_ERROR_TYPE::UNMATCH_OPERAND, exp->line_num);
            }
            else
            {
                analyze_stmt(stmt1, ret_type);
                if (stmt->nodes_num == 7)
                {
                    Node *_else = nextNode(stmt);
                    Node *stmt2 = nextNode(stmt);
                    analyze_stmt(stmt2, ret_type);
                }
            }
        }
    }
    else if (node1->name == "WHILE")
    {
        Node *_LP = nextNode(stmt);
        Node *exp = nextNode(stmt);
        SemanticType *exp_type = analyze_exp(exp);
        if (exp_type != nullptr)
        {
            if (!(exp_type->category == Category::PRIMITIVE && exp_type->nodetype == NodeType::Int))
            {
                my_error(MY_ERROR_TYPE::UNMATCH_OPERAND, exp->line_num);
            }
            else
            {
                Node *_RP = nextNode(stmt);
                Node *stmt1 = nextNode(stmt);
                analyze_stmt(stmt1, ret_type);
            }
        }
    }
}

void analyze_ext_dec_list(Node *ext_dec_list, SemanticType *type_)
{

    Node *var_dec = nextNode(ext_dec_list);
    analyze_var_dec(var_dec, type_);
    if (ext_dec_list->nodes_num != 1)
    {
        Node *_COMMA = nextNode(ext_dec_list);
        Node *ext_dec_list1 = nextNode(ext_dec_list);
        analyze_ext_dec_list(ext_dec_list1, type_);
    }
}
