#include "tree.hpp"

void generate_ir(Node*);
void translate_ExtDefList(Node* node);
void translate_ExtDef(Node* node);
void concatenate_ir(Node* target, Node* s1, Node* s2);
void concatenate_ir(Node* target, Node* s1) ;
void translate_Specifier(Node* node);
void translate_FunDec(Node* node);
void translate_DefList(Node* node);
void translate_StmtList(Node* node);
void translate_Stmt(Node* node);
void translate_CompSt(Node* node);
string new_place();
void translate_Exp(Node* node, string place);
void translate_Def(Node* node);
void translate_DecList(Node* node);
void translate_Dec(Node* node);
void translate_VarDec(Node* node);
string new_label();
void translate_VarList(Node* node);
void translate_ParamDec(Node* node);
void translate_cond_Exp(Node* node, string lb_t, string lb_f);
void translate_Args(Node* node, vector<string>& arg_list);