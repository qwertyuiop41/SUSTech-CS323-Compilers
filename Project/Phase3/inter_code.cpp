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
unordered_map<string, unordered_map<string, int>> class_field_map;
unordered_map<string, string> obj_class_map;
unordered_map<string, string> obj_class_funcmap;
vector<string> arr_funclist;
vector<string> arr_list;
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
    // printTree(root);
    // printNodeName(root);
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
    if (node->nodes_num == 3 &&
        !strcmp(node->children[1]->name.c_str(), "FunDec")) {
        Node* FunDec = node->children[1];
        Node* CompSt = node->children[2];
        translate_FunDec(FunDec);
        translate_CompSt(CompSt);
        concatenate_ir(node, FunDec, CompSt);
    } else if (node->nodes_num == 2) {
        Node* Specifier = node->children[0];
        translate_Specifier(Specifier);
    } else {
        printf("Error in translate_ExtDef!");
    }
}

//Specifier -> TYPE | StructSpecifier
void translate_Specifier(Node* node) {
    if (!strcmp(node->children[0]->name.c_str(), "StructSpecifier")) {
        Node* StructSpecifier = node->children[0];
        translate_StructSpecifier(StructSpecifier);
    }
}

// StructSpecifier -> STRUCT ID LC DefList RC | STRUCT ID
void translate_StructSpecifier(Node* node) {
    if (node->nodes_num == 5) {
        //  STRUCT ID LC DefList RC
        string id = string(node->children[1]->char_value);
        unordered_map<string, int> umap;
        Node* DefList = node->children[3];
        translate_StructDefList(umap, DefList, 0);
        class_field_map.insert(make_pair(id, umap));
    }
}

// DefList -> Def DefList  
//     | $
// Def -> Specifier DecList SEMI
//DecList -> Dec
void translate_StructDefList(unordered_map<string, int>& umap,
                           Node* node,
                           int i) {
    if (!node || node->nodes_num == 0) {
        return;
    } else {
        string id = string(node->children[0]->children[1]->children[0]->children[0]->children[0]->char_value);
        umap.insert(make_pair(id, i));
        Node* DefList = node->children[1];
        translate_StructDefList(umap, DefList, i + 1);
    }
}

// FunDec -> ID LP RP | ID LP VarList RP 
void translate_FunDec(Node* node) {
    if (node->nodes_num == 3) {
        node->ir.push_back("FUNCTION " +
                           string(node->children[0]->char_value) +
                           " :");
    } else if (node->nodes_num == 4) {
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
    Node* Specifier = node->children[0];
    Node* VarDec = node->children[1];
    if(!strcmp(Specifier->children[0]->name.c_str(), "StructSpecifier")){
        //参数是结构体
        string class_name = string(Specifier->children[0]->children[1]->char_value);
        string obj_name = string(VarDec->children[0]->char_value);
        obj_class_funcmap.insert(make_pair(obj_name, class_name));
        node->ir.push_back("PARAM " + obj_name);
    }else if(VarDec->nodes_num == 1){
        Node* ID = VarDec->children[0];
        node->ir.push_back("PARAM " + string(ID->char_value));
    } else if(VarDec->nodes_num == 4){
        string arr_name = VarDec->children[0]->children[0]->char_value;
        arr_funclist.push_back(arr_name);
        node->ir.push_back("PARAM "+arr_name);
    }
}

//CompSt -> LC DefList StmtList RC  
void translate_CompSt(Node* node){
    Node* DefList = node->children[1];
    Node* StmtList = node->children[2];
    translate_DefList(DefList);
    translate_StmtList(StmtList);
    concatenate_ir(node, DefList, StmtList);
}

//DefList -> Def DefList  
//  | $
void translate_DefList(Node* node){
    if (!node || node->nodes_num == 0) {
        return;
    } else if (node->nodes_num == 2) {
        Node* Def = node->children[0];
        Node* DefList = node->children[1];
        translate_Def(Def);
        translate_DefList(DefList);
        concatenate_ir(node, Def, DefList);
    } else {
        printf("Error in translate_DefList");
    }
}

// Def -> Specifier DecList SEMI
void translate_Def(Node* node){
    Node* Specifier = node->children[0];
    Node* DecList = node->children[1];
    if (!strcmp(Specifier->children[0]->name.c_str(), "StructSpecifier")) {
        string class_name = string(Specifier->children[0]->children[1]->char_value);
        translate_StructDecList(DecList, class_name);

    } else {
        translate_DecList(DecList);
    }

    concatenate_ir(node, DecList);
}

// DecList -> Dec | Dec COMMA DecList
void translate_StructDecList(Node* node, string class_name){
    string obj_name = string(node->children[0]->children[0]->children[0]->char_value);  
    obj_class_map.insert(make_pair(obj_name, class_name));
    auto size = class_field_map[class_name].size(); 
    node->ir.push_back("DEC " + obj_name + " " + to_string(size * 4));
    if (node->nodes_num == 1) {
        return;
    }
    Node* DecList = node->children[2];
    translate_StructDecList(DecList, class_name);
    concatenate_ir(node, DecList);
}


// DecList -> Dec | Dec COMMA DecList
void translate_DecList(Node* node) {
    if (node->nodes_num == 1) {      
        Node* Dec = node->children[0];
        translate_Dec(Dec);
        concatenate_ir(node, Dec);
    } else if (node->nodes_num == 3) {      
        Node* Dec = node->children[0];
        Node* DecList = node->children[2];
        translate_Dec(Dec);
        translate_DecList(DecList);
        concatenate_ir(node, Dec, DecList);
    } else {
        printf("Error in translate_DecList");
    }
}
// Dec -> VarDec | VarDec ASSIGN Exp  
void translate_Dec(Node* node) {
    if (node->nodes_num == 1) {
        Node* VarDec = node->children[0];
        translate_VarDec(VarDec);
        concatenate_ir(node, VarDec);
    } else if (node->nodes_num == 3) {
        Node* VarDec = node->children[0];
        Node* Exp = node->children[2];
        translate_VarDec(VarDec);
        string place = new_place();
        string id;
        if (VarDec->nodes_num == 1) // ID ASSIGN Exp
            id = string(VarDec->children[0]->char_value); 
        translate_Exp(Exp, place);
        concatenate_ir(node, VarDec, Exp);
        node->ir.push_back(id + " := " +place);

    } else {
        printf("Error in translate_Dec");
    }
}

// VarDec -> ID | VarDec LB INT RB 
void translate_VarDec(Node* node) {
    if (node->nodes_num == 4) { 
        string id = string(node->children[0]->children[0]->char_value);
        string size = string(node->children[2]->name);
        node->ir.push_back("DEC " + id + " " + to_string(stoi(size) * 4));
        arr_list.push_back(id);
    }
}

// StmtList -> Stmt StmtList | $
void translate_StmtList(Node* node){
    if (!node || node->nodes_num == 0) {
        return;
    } else if (node->nodes_num == 2) {
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
        Node* Exp = node->children[0];
        string place = new_place();
        translate_Exp(Exp, place);
        concatenate_ir(node, Exp);
    } else if (node->nodes_num == 3 &&
        !strcmp(node->children[0]->name.c_str(), "RETURN")) {
        // Stmt -> RETURN Exp SEMI  
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
    }
}

//Exp -> Exp ASSIGN Exp
void translate_Exp(Node* node, string& place){

    if (node->nodes_num == 1 &&
        node->children[0]->nodetype == Int) { 
        // Exp -> INT
        place = "#" + string(node->children[0]->name.c_str());
    } else if (node->nodes_num == 1 &&
               node->children[0]->nodetype == Id) { 
        // Exp -> ID
        place = string(node->children[0]->char_value);
    }else if (node->nodes_num == 3 &&
               !strcmp(node->children[0]->name.c_str(), "Exp") &&
               !strcmp(
                   node->children[2]->name.c_str(),
                   "Exp")) {
        Node* Exp1 = node->children[0];
        Node* Exp2 = node->children[2];

    
        if (!strcmp(node->children[1]->name.c_str(), "ASSIGN")) {
            if (Exp1->nodes_num == 4) {
                //Exp ->  Exp LB Exp RB
                Node* Exp11 = Exp1->children[0];
                Node* Exp22 = Exp1->children[2];
                string id = string(Exp11->children[0]->char_value);
                string offset = new_place();
                translate_Exp(Exp22, offset);
                concatenate_ir(Exp1,Exp22);
                string tp1 = new_place();
                string tp2 = new_place();
                Exp1->ir.push_back(tp1+" := "+offset + " * #4");
                auto it = std::find(arr_funclist.begin(), arr_funclist.end(), id);
                if(it != arr_funclist.end()){
                    Exp1->ir.push_back(tp2 + " := " + id + " + "+tp1);
                } else {
                    Exp1->ir.push_back(tp2 + " := &" + id + " + "+tp1);
                }
                string tp3 = new_place();
                translate_Exp(Exp2, tp3);
                concatenate_ir(node,Exp1,Exp2);
                node->ir.push_back( "*" + tp2 + " := " + tp3);

            } else if (Exp1->nodes_num == 3) {
                //  Exp DOT ID
                string obj_name = string(Exp1->children[0]->children[0]->char_value);
                string field = string(Exp1->children[2]->char_value);
                string address = new_place();
                if(obj_class_funcmap.count(obj_name) > 0){
                    int offset = class_field_map[obj_class_funcmap[obj_name]][field];
                    Exp1->ir.push_back(address + " := " + obj_name + " + #" + to_string(offset * 4));

                } else {
                    int offset = class_field_map[obj_class_map[obj_name]][field];
                    Exp1->ir.push_back(address + " := &" + obj_name + " + #" + to_string(offset * 4));
                }
                string place = new_place();
                translate_Exp(Exp2, place);
                concatenate_ir(node, Exp1, Exp2);
                node->ir.push_back("*" + address + " := " + place);
            
            } else {  // Exp1 -> ID 
                string id = string(Exp1->children[0]->char_value);
                string place = new_place();
                translate_Exp(Exp2, place);
                concatenate_ir(node, Exp1, Exp2);
                node->ir.push_back(id + " := "+place);
            }
        
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
        node->ir.push_back(place + " := #0" + " - " + tp); 

    } else if (node->nodes_num == 3 &&
               !strcmp(node->children[1]->name.c_str(), "LP") &&
               !strcmp(
                   node->children[2]->name.c_str(),
                   "RP")) {
        // Exp -> ID LP RP
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
        //  Exp -> ID LP Args RP 
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
            for (string i : arg_list) {
                auto it = std::find(arr_list.begin(), arr_list.end(), i);
                if(obj_class_map.count(i) > 0 || (it != arr_list.end())){
                    Args->ir.push_back("ARG &" + i);
                }else {
                    Args->ir.push_back("ARG " + i);
                }
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
        // Exp ->  Exp LB Exp RB  (Exp [Exp])
        string id = string(node->children[0]->children[0]->char_value);
        string offset = new_place();
        Node* Exp2 = node->children[2];
        translate_Exp(Exp2, offset);
        concatenate_ir(node, Exp2);
        string tp1 = new_place();
        string tp2 = new_place();
        node->ir.push_back(tp1 + " := " + offset + " * #4");
        
        auto it = std::find(arr_list.begin(), arr_list.end(), id);
        if(it != arr_list.end()){
            node->ir.push_back(tp2 + " := &" + id + " + " + tp1);
        }else {
            node->ir.push_back(tp2 + " := " + id + " + " + tp1);
        }
        node->ir.push_back(tp2 + " := &" + id + " + " + tp1);
        node->ir.push_back(place + " := *" + tp2);


    } else if (node->nodes_num == 3 &&
               !strcmp(node->children[1]->name.c_str(), "DOT")) {
        string obj_name = string(node->children[0]->children[0]->char_value);
        string field_name = string(node->children[2]->char_value);
        auto offset = class_field_map[obj_class_map[obj_name]][field_name];
        string tp = new_place();
        if(obj_class_map.count(obj_name) > 0){
            node->ir.push_back(tp + " := &" + obj_name + " + #" + to_string(offset * 4));
        }else {
           node->ir.push_back(tp + " := " + obj_name + " + #" + to_string(offset * 4));
        }
        node->ir.push_back(place + " := *" + tp);
    } else {
        printf("Not implemented");
    }
}

// Args -> Exp COMMA Args | Exp
void translate_Args(Node* node, vector<string>& arg_list) {
    if (node->nodes_num == 1) {
        string tp = new_place();
        Node* Exp = node->children[0];
        if(Exp->children[0]->nodetype == Id){
            arg_list.insert(arg_list.begin(), Exp->children[0]->char_value);
        }else{
            translate_Exp(Exp, tp); 
            arg_list.insert(arg_list.begin(), tp);
        };
        concatenate_ir(node, Exp);
    } else {
        string tp = new_place();
        Node* Exp = node->children[0];
        Node* Args = node->children[2];
        if(Exp->children[0]->nodetype == Id){
            arg_list.insert(arg_list.begin(), Exp->children[0]->char_value);
        }else{
            translate_Exp(Exp, tp);
            arg_list.insert(arg_list.begin(), tp);
        }
        translate_Args(Args, arg_list);
        concatenate_ir(node, Exp, Args);
    }
}