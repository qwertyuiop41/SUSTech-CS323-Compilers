#include "inter_code.h"
#include "type.hpp"

#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <unordered_map>
using std::cout;
using std::endl;
using std::make_pair;
using std::ofstream;
using std::stoi;
using std::string;
using std::to_string;
using std::unordered_map;
using std::vector;


int tmp_cnt = 0;
int label_cnt = 0;
string new_place() {
    tmp_cnt++;
    return "t" + to_string(tmp_cnt);
}
string new_label() {
    label_cnt++;
    return "label" + to_string(label_cnt);
}
void concatenate_ir(Node* target, Node* s1, Node* s2) {
    if (s1) {
        target->ir.insert(target->ir.end(), s1->ir.begin(), s1->ir.end());
    }
    if (s2) {
        target->ir.insert(target->ir.end(), s2->ir.begin(), s2->ir.end());
    }
};
void concatenate_ir(Node* target, Node* s1) {
    if (s1) {
        target->ir.insert(target->ir.end(), s1->ir.begin(), s1->ir.end());
    }
};

void generate_ir(Node* root){
    printTree(root);
    printNodeName(root);
    if (root == nullptr) {
        printf("Empty parse tree\n");
        return;
    }
    Node* ExtDefList = nextNode(root);
    // Program -> ExtDefList
    translate_ExtDefList(ExtDefList);
    root->ir = ExtDefList->ir;
    for (auto i : root->ir) {
        printf("%s\n",i.c_str());
    }
}

// ExtDefList -> ExtDef ExtDefList | $
void translate_ExtDefList(Node* node) {
    if (!node || node->nodes_num == 0) {
        return;
    } else if (node->nodes_num == 2) {
        printf("ExtDefList, nodes num == 2\n");
        Node* ExtDef = nextNode(node);
        Node* ExtDefList = nextNode(node);

        translate_ExtDef(ExtDef);
        translate_ExtDefList(ExtDefList);

        concatenate_ir(node, ExtDef, ExtDefList);
    } 
    else {
        printf("Error in translate_ExtDefList!");
    }
}

// ExtDefList -> Specifier ExtDecList SEMI | Specifier SEMI |Specifier FunDec CompSt
void translate_ExtDef(Node* node) {
    //?还有一个 Specifier ExtDecList SEMI 没有
    if (node->nodes_num == 3 &&
        !strcmp(node->children[1]->name.c_str(), "FunDec")) {
        printf("ExtDef, nodes num == 3\n");
        Node* FunDec = node->children[1];
        Node* CompSt = node->children[2];
        translate_FunDec(FunDec);
        translate_CompSt(CompSt);
        concatenate_ir(node, FunDec, CompSt);
    } else if (node->nodes_num == 2) {
        Node* Specifier = node->children[0];
    } else {
        printf("Error in translate_ExtDef!");
    }
}

//Specifier -> TYPE | StructSpecifier
void translate_Specifier(Node* node) {//? TYPE就不用管了
    // if (!strcmp(node->child_first_ptr->node->name, "StructSpecifier")) {
    //     Node* StructSpecifier = node->child_first_ptr->node;
    //     translate_StructSpecifier(StructSpecifier);
    // }
}
// FunDec -> ID LP RP | ID LP VarList RP  (int main() 的 main()|void test(int a, int b)的 test(int a, int b))
//VarList是只在函数定义FunDec里才有的
void translate_FunDec(Node* node) {
    if (node->nodes_num == 3) {
        printf("FunDec, nodes num == 3\n");
        node->ir.push_back("FUNCTION " +
                           string(node->children[0]->char_value) +
                           " :");
    } else if (node->nodes_num == 4) {
        printf("FunDec, nodes num == 4\n");
        node->ir.push_back("FUNCTION " +
                           string(node->children[0]->char_value) +
                           " :");
        Node* VarList = node->children[2];
        translate_VarList(VarList);
        concatenate_ir(node, VarList);
    } else {
        printf("Error in translate_ExtDef!");
    }
}

// VarList -> ParamDec COMMA VarList
//     | ParamDec
void translate_VarList(Node* node){
    if(node->nodes_num == 3){
        Node* ParamDec = node->children[0];
        Node* VarList = node ->children[2];
        translate_ParamDec(ParamDec);
        translate_VarList(VarList);
        concatenate_ir(node, ParamDec, VarList);
    }else if(node->nodes_num == 1){
        Node* ParamDec = node->children[0];
        translate_ParamDec(ParamDec);
        concatenate_ir(node, ParamDec);
    }
}
//ParamDec -> Specifier VarDec
// VarDec -> ID
//     | VarDec LB INT RB
void translate_ParamDec(Node* node){
    Node* VarDec = node->children[1];
    if(VarDec->nodes_num == 1){
        Node* ID = VarDec->children[0];
        node->ir.push_back("PARAM " + string(ID->char_value));
    } else if(VarDec->nodes_num == 4){
        //?处理数组
    }
}

//CompSt -> LC DefList StmtList RC  
void translate_CompSt(Node* node){
    printf("CompSt, nodes num == 4\n");
    Node* DefList = node->children[1];
    Node* StmtList = node->children[2];
    translate_DefList(DefList);
    translate_StmtList(StmtList);
    concatenate_ir(node, DefList, StmtList);
}

//DefList -> Def DefList  （int a; int b; 一个语句是一个Def)
//  | $
void translate_DefList(Node* node){
    if (!node || node->nodes_num == 0) {
        return;
    } else if (node->nodes_num == 2) {
        printf("DefList, nodes num == 2\n");
        Node* Def = node->children[0];
        Node* DefList = node->children[1];
        translate_Def(Def);
        translate_DefList(DefList);
        concatenate_ir(node, Def, DefList);
    } else {
        printf("Error in translate_DefList");
    }
}

// Def -> Specifier DecList SEMI  (int a; int a,b,c; int后面跟着的是DecList)
void translate_Def(Node* node){
    printf("Def\n");
    Node* Specifier = node->children[0];
    Node* DecList = node->children[1];
    if (!strcmp(Specifier->children[0]->name.c_str(), "StructSpecifier")) {
        // string id = string(Specifier->child_first_ptr->node->child_first_ptr
        //                        ->next_child->node->name)
        //                 .substr(4);
        // _parse_Struct_DecList(DecList, id);

    } else {
        translate_DecList(DecList);
    }

    concatenate_ir(node, DecList);
}

// DecList -> Dec | Dec COMMA DecList (int a; 的 a｜int a,b;的 a,b)
void translate_DecList(Node* node) {
    if (node->nodes_num == 1) {
        printf("DecList, nodes num == 1\n");
        Node* Dec = node->children[0];
        translate_Dec(Dec);
        concatenate_ir(node, Dec);
    } else if (node->nodes_num == 3) {
        printf("DecList, nodes num == 3\n");
        Node* Dec = node->children[0];
        Node* DecList = node->children[2];
        translate_Dec(Dec);
        translate_DecList(DecList);
        concatenate_ir(node, Dec, DecList);
    } else {
        printf("Error in translate_DecList");
    }
}
// Dec -> VarDec | VarDec ASSIGN Exp  (int a; 的a | int a=1; 的 a=1)
void translate_Dec(Node* node) {
    if (node->nodes_num == 1) {
        printf("Dec, nodes num == 1\n");
        Node* VarDec = node->children[0];
        translate_VarDec(VarDec);
        concatenate_ir(node, VarDec);
    } else if (node->nodes_num == 3) {
        printf("Dec, nodes num == 3\n");
        Node* VarDec = node->children[0];
        Node* Exp = node->children[2];
        translate_VarDec(VarDec);
        string place;
        if (VarDec->nodes_num == 1)
            place = string(VarDec->children[0]->char_value); //id的值
        translate_Exp(Exp, place);
        concatenate_ir(node, VarDec, Exp);

    } else {
        printf("Error in translate_Dec");
    }
}

// VarDec -> ID | VarDec LB INT RB (int a; 的a|int a[1] 的a[1])
void translate_VarDec(Node* node) {
    if (node->nodes_num == 4) { //TODO：数组
        // string id =
        //     string(node->child_first_ptr->node->child_first_ptr->node->name)
        //         .substr(4);
        // string size =
        //     string(node->children[2]->name)
        //         .substr(5);
        // node->ir.push_back("DEC " + id + " " + to_string(stoi(size) * 4));
    }
}

// StmtList -> Stmt StmtList | $
void translate_StmtList(Node* node){
    if (!node || node->nodes_num == 0) {
        return;
    } else if (node->nodes_num == 2) {
        printf("StmtList, Stmt StmtList\n");
        Node* Stmt = node->children[0];
        Node* StmtList = node->children[1];
        translate_Stmt(Stmt);
        translate_StmtList(StmtList);
        concatenate_ir(node, Stmt, StmtList);
    } else {
        printf("Error in translate_StmtList");
    }
}

// Stmt -> Exp SEMI
//     | CompSt
//     | RETURN Exp SEMI
//     | IF LP Exp RP Stmt
//     | IF LP Exp RP Stmt ELSE Stmt
//     | WHILE LP Exp RP Stmt
void translate_Stmt(Node* node){
    if (node->nodes_num == 2 &&
               !strcmp(node->children[0]->name.c_str(), "Exp")) {
        // Stmt -> Exp SEMI
        printf("Stmt, Exp SEMI\n");
        Node* Exp = node->children[0];
        string place = new_place();
        translate_Exp(Exp, place);
        concatenate_ir(node, Exp);
    } else if (node->nodes_num == 3 &&
        !strcmp(node->children[0]->name.c_str(), "RETURN")) {
        // Stmt -> RETURN Exp SEMI  
        printf("Stmt, RETURN EXP SEMI\n");
        Node* Exp = node->children[1];
        string place = new_place();
        translate_Exp(Exp, place);
        concatenate_ir(node, Exp);
        node->ir.push_back("RETURN " + place);
    } else if (node->nodes_num == 1 &&
               !strcmp(node->children[0]->name.c_str(), "CompSt")) {
        // Stmt -> CompSt
        Node* CompSt = node->children[0];
        translate_CompSt(CompSt);
        concatenate_ir(node, CompSt);
    } else if (node->nodes_num == 5 &&
               !strcmp(node->children[0]->name.c_str(), "IF")) {
        // Stmt -> IF LP Exp RP Stmt
        string lb1 = new_label();
        string lb2 = new_label();
        Node* Exp = node->children[2];
        Node* Stmt = node->children[4];
        translate_cond_Exp(Exp, lb1, lb2);
        Exp->ir.push_back("LABEL " + lb1 + " :");
        translate_Stmt(Stmt);
        Stmt->ir.push_back("LABEL " + lb2 + " :");
        concatenate_ir(node, Exp, Stmt);

    } else if (node->nodes_num == 7) {
        // Stmt -> IF LP Exp RP Stmt ELSE Stmt
        string lb1 = new_label();
        string lb2 = new_label();
        string lb3 = new_label();
        Node* Exp = node->children[2];
        Node* Stmt1 = node->children[4];
        Node* Stmt2 = node->children[6];
        translate_cond_Exp(Exp, lb1, lb2);
        Exp->ir.push_back("LABEL " + lb1 + " :");
        concatenate_ir(node, Exp);
        translate_Stmt(Stmt1);
        Stmt1->ir.push_back("GOTO " + lb3);
        Stmt1->ir.push_back("LABEL " + lb2 + " :");
        translate_Stmt(Stmt2);
        Stmt2->ir.push_back("LABEL " + lb3 + " :");
        concatenate_ir(node, Stmt1, Stmt2);

    } else if (!strcmp(node->children[0]->name.c_str(), "WHILE")) {
        //    WHILE LP Exp RP Stmt
        string lb1 = new_label();
        string lb2 = new_label();
        string lb3 = new_label();
        Node* Exp = node->children[2];
        Node* Stmt = node->children[4];
        Exp->ir.push_back("LABEL " + lb1 + " :");
        translate_cond_Exp(Exp, lb2, lb3);
        Stmt->ir.push_back("LABEL " + lb2 + " :");
        translate_Stmt(Stmt);
        Stmt->ir.push_back("GOTO " + lb1);
        concatenate_ir(node, Exp, Stmt);
        node->ir.push_back("LABEL " + lb3 + " :");
    } else {
        printf("Error in translate_Stmt");
    }
}

void translate_cond_Exp(Node* node, string lb_t, string lb_f){
    if (node->nodes_num == 2) {
        // NOT EXP
        translate_cond_Exp(node->children[1], lb_f, lb_t); //
    } else if (!strcmp(node->children[1]->name.c_str(), "AND")) {
        string lb1 = new_label();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_cond_Exp(Exp1, lb1, lb_f);
        Exp1->ir.push_back("LABEL " + lb1 + " :");
        translate_cond_Exp(Exp2, lb_t, lb_f);
        concatenate_ir(node, Exp1, Exp2);
    } else if (!strcmp(node->children[1]->name.c_str(), "OR")) {
        string lb1 = new_label();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_cond_Exp(Exp1, lb_t, lb1);
        Exp1->ir.push_back("LABEL " + lb1 + " :");
        translate_cond_Exp(Exp2, lb_t, lb_f);
        concatenate_ir(node, Exp1, Exp2);
    } else if (!strcmp(node->children[1]->name.c_str(), "EQ")) {
        string t1 = new_place();
        string t2 = new_place();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_Exp(Exp1, t1);
        translate_Exp(Exp2, t2);
        concatenate_ir(node, Exp1, Exp2);
        node->ir.push_back("IF " + t1 + " == " + t2 + " GOTO " + lb_t);
        node->ir.push_back("GOTO " + lb_f);
    } else if (!strcmp(node->children[1]->name.c_str(), "NE")) {
        string t1 = new_place();
        string t2 = new_place();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_Exp(Exp1, t1);
        translate_Exp(Exp2, t2);
        concatenate_ir(node, Exp1, Exp2);
        node->ir.push_back("IF " + t1 + " != " + t2 + " GOTO " + lb_t);
        node->ir.push_back("GOTO " + lb_f);
    } else if (!strcmp(node->children[1]->name.c_str(), "GE")) {
        string t1 = new_place();
        string t2 = new_place();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_Exp(Exp1, t1);
        translate_Exp(Exp2, t2);
        concatenate_ir(node, Exp1, Exp2);
        node->ir.push_back("IF " + t1 + " >= " + t2 + " GOTO " + lb_t);
        node->ir.push_back("GOTO " + lb_f);
    } else if (!strcmp(node->children[1]->name.c_str(), "GT")) {
        string t1 = new_place();
        string t2 = new_place();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_Exp(Exp1, t1);
        translate_Exp(Exp2, t2);
        concatenate_ir(node, Exp1, Exp2);
        node->ir.push_back("IF " + t1 + " > " + t2 + " GOTO " + lb_t);
        node->ir.push_back("GOTO " + lb_f);
    } else if (!strcmp(node->children[1]->name.c_str(), "LE")) {
        string t1 = new_place();
        string t2 = new_place();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_Exp(Exp1, t1);
        translate_Exp(Exp2, t2);
        concatenate_ir(node, Exp1, Exp2);
        node->ir.push_back("IF " + t1 + " <= " + t2 + " GOTO " + lb_t);
        node->ir.push_back("GOTO " + lb_f);
    } else if (!strcmp(node->children[1]->name.c_str(), "LT")) {
        string t1 = new_place();
        string t2 = new_place();
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];
        translate_Exp(Exp1, t1);
        translate_Exp(Exp2, t2);
        concatenate_ir(node, Exp1, Exp2);
        node->ir.push_back("IF " + t1 + " < " + t2 + " GOTO " + lb_t);
        node->ir.push_back("GOTO " + lb_f);
    } //TODO:while(--a)
}

//Exp -> Exp ASSIGN Exp
void translate_Exp(Node* node, string place){
    if (node->nodes_num == 1 &&
        node->children[0]->nodetype == Int) { 
        // Exp -> INT
        string ir = place + " := #" +
                    string(node->children[0]->name.c_str());
        node->ir.push_back(ir);

    } else if (node->nodes_num == 1 &&
               node->children[0]->nodetype == Id) { // ?
        // Exp -> ID
        string ir = place + " := " +
                    string(node->children[0]->char_value); //?char_value
        node->ir.push_back(ir);
    }else if (node->nodes_num == 3 &&
               !strcmp(node->children[0]->name.c_str(), "Exp") &&
               !strcmp(
                   node->children[2]->name.c_str(),
                   "Exp")) {
        printf("Exp, nodes num == 3\n");
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];

    
        if (!strcmp(node->children[1]->name.c_str(), "ASSIGN")) {
            if (Exp1->nodes_num == 4) {
                // // TODO:array
                // string id = string(Exp1->child_first_ptr->node->child_first_ptr
                //                        ->node->name)
                //                 .substr(4);
                // string offset_value;

                // string offset = new_place();
                // if (!memcmp(Exp1->children[2]
                //                 ->child_first_ptr->node->name,
                //             "INT", 3)) {
                //     offset_value =
                //         string(Exp1->child_first_ptr->next_child->next_child
                //                    ->node->child_first_ptr->node->name)
                //             .substr(5);
                //     Exp1->ir.push_back(offset + " := #" + offset_value +
                //                        " * #4");
                // } else {
                //     offset_value =
                //         string(Exp1->child_first_ptr->next_child->next_child
                //                    ->node->child_first_ptr->node->name)
                //             .substr(4);
                //     Exp1->ir.push_back(offset + " := " + offset_value +
                //                        " * #4");
                // }

                // string address = new_place();
                // Exp1->ir.push_back(address + " := &" + id + " + " + offset);
                // string place = new_place();
                // translate_Exp(Exp2, place);
                // Exp2->ir.push_back("*" + address + " := " + place);

            } else if (Exp1->nodes_num == 3) {
                // // TODO:struct
                // string id = string(Exp1->child_first_ptr->node->child_first_ptr
                //                        ->node->name)
                //                 .substr(4);
                // string variable = string(Exp1->child_first_ptr->next_child
                //                              ->next_child->node->name)
                //                       .substr(4);

                // string address = new_place();
                // int offset = struct_map[type_map[id]][variable];
                // Exp1->ir.push_back(address + " := &" + id + " + #" +
                //                    to_string(offset * 4));
                // string place = new_place();
                // translate_Exp(Exp2, place);

                // Exp2->ir.push_back("*" + address + " := " + place);
            } else {
                string variable = string(Exp1->children[0]->char_value); //如果是ID，则variable是id的值，如果是Int/Float这种，则variable是具体的值
                translate_Exp(Exp2, variable);
            }
            concatenate_ir(node, Exp1, Exp2);
        } else if (!strcmp(node->children[1]->name.c_str(),
                           "PLUS")) {
            string t1 = new_place();
            string t2 = new_place();
            translate_Exp(Exp1, t1);
            translate_Exp(Exp2, t2);
            concatenate_ir(node, Exp1, Exp2);
            node->ir.push_back(place + " := " + t1 + " + " + t2);
        } else if (!strcmp(node->children[1]->name.c_str(),
                           "MINUS")) {
            string t1 = new_place();
            string t2 = new_place();
            translate_Exp(Exp1, t1);
            translate_Exp(Exp2, t2);
            concatenate_ir(node, Exp1, Exp2);
            node->ir.push_back(place + " := " + t1 + " - " + t2);
        } else if (!strcmp(node->children[1]->name.c_str(),
                           "MUL")) {
            string t1 = new_place();
            string t2 = new_place();
            translate_Exp(Exp1, t1);
            translate_Exp(Exp2, t2);
            concatenate_ir(node, Exp1, Exp2);
            node->ir.push_back(place + " := " + t1 + " * " + t2);

        } else if (!strcmp(node->children[1]->name.c_str(),
                           "DIV")) {
            string t1 = new_place();
            string t2 = new_place();
            translate_Exp(Exp1, t1);
            translate_Exp(Exp2, t2);
            concatenate_ir(node, Exp1, Exp2);
            node->ir.push_back(place + " := " + t1 + " / " + t2);
        }
    }else if (node->nodes_num == 2 &&
               !strcmp(node->children[0]->name.c_str(), "MINUS")) {
        // MINUS EXP
        string tp = new_place();
        Node* Exp = node->children[1];
        translate_Exp(Exp, tp);
        concatenate_ir(node, Exp);
        node->ir.push_back(place + " := #0" + " - " + tp); //?不用#0吧

    } else if (node->nodes_num == 3 &&
               !strcmp(node->children[1]->name.c_str(), "LP") &&
               !strcmp(
                   node->children[2]->name.c_str(),
                   "RP")) {
        // Exp -> ID LP RP  无参函数调用
        string id = string(node->children[0]->char_value);
        if (id == "read") {
            node->ir.push_back("READ " + place);
        } else {
            node->ir.push_back(place + " := CALL " + id);
        }
    } else if (node->nodes_num == 4 &&
               !strcmp(node->children[1]->name.c_str(), "LP") &&
               !strcmp(
                   node->children[2]->name.c_str(),
                   "Args")) {
        //  Exp -> ID LP Args RP (s(a,b,c) | write(a) 有参函数调用)
        string id = string(node->children[0]->char_value);
        Node* Args = node->children[2];
        if (id == "write") {
            Node* Exp = Args->children[0];
            string tp = new_place();
            translate_Exp(Exp, tp);
            concatenate_ir(node, Exp);
            node->ir.push_back("WRITE " + tp);
        } else {
            vector<string> arg_list;
            translate_Args(Args, arg_list);
            for (auto i : arg_list) {
                Args->ir.push_back("ARG " + i);
            }
            concatenate_ir(node, Args);
            node->ir.push_back(place + " := CALL " + id);
        }
    } else if (node->nodes_num == 3 &&
               !strcmp(node->children[0]->name.c_str(), "LP")) {
        // Exp -> LP Exp RP
        Node* Exp = node->children[1];
        translate_Exp(Exp, place);
        concatenate_ir(node, Exp);
    }

    else if (node->nodes_num == 4 &&
             !strcmp(node->children[1]->name.c_str(), "LB")) {
        // TODO: Exp ->  Exp LB Exp RB  (Exp [Exp])
        // array
        // string id =
        //     string(node->child_first_ptr->node->child_first_ptr->node->name)
        //         .substr(4);
        // string offset_value;

        // string offset = new_place();
        // if (!memcmp(node->child_first_ptr->next_child->next_child->node
        //                 ->child_first_ptr->node->name,
        //             "INT", 3)) {
        //     offset_value = string(node->child_first_ptr->next_child->next_child
        //                               ->node->child_first_ptr->node->name)
        //                        .substr(5);
        //     node->ir.push_back(offset + " := #" + offset_value + " * #4");
        // } else {
        //     offset_value = string(node->child_first_ptr->next_child->next_child
        //                               ->node->child_first_ptr->node->name)
        //                        .substr(4);
        //     node->ir.push_back(offset + " := " + offset_value + " * #4");
        // }

        // string address = new_place();
        // node->ir.push_back(address + " := &" + id + " + " + offset);

        // node->ir.push_back(place + " := *" + address);

    } else if (node->nodes_num == 3 &&
               !strcmp(node->children[1]->name.c_str(), "DOT")) {
        // TODO: struct
        // string id =
        //     string(node->child_first_ptr->node->child_first_ptr->node->name)
        //         .substr(4);
        // string variable =
        //     string(node->child_first_ptr->next_child->next_child->node->name)
        //         .substr(4);
        // auto offset = struct_map[type_map[id]][variable];
        // string tp = new_place();
        // node->ir.push_back(tp + " := &" + id + " + #" + to_string(offset * 4));
        // node->ir.push_back(place + " := *" + tp);

    } else {
        printf("Not implemented");
    }
}

// Args -> Exp COMMA Args | Exp
void translate_Args(Node* node, vector<string>& arg_list) {
    if (node->nodes_num == 1) {
        string tp = new_place();
        Node* Exp = node->children[0];
        translate_Exp(Exp, tp);
        arg_list.insert(arg_list.begin(), tp);
        concatenate_ir(node, Exp);
    } else {
        string tp = new_place();
        Node* Exp = node->children[0];
        Node* Args = node->children[2];
        translate_Exp(Exp, tp);
        arg_list.insert(arg_list.begin(), tp);
        translate_Args(Args, arg_list);
        concatenate_ir(node, Exp, Args);
    }
}