#ifndef SYMBOL_HPP
#define SYMBOL_HPP

#include "tree.hpp"
#include "type.hpp"
#include "my_error.hpp"
#include <unordered_map>

void semantic_analyze(Node* program);
void analyze_ext_def_list(Node* ext_def_list);
void analyze_ext_def(Node* ext_def);
void analyze_var_list(Node* var_list, ParamList* paramslist);
void analyze_comp_st(Node* compst, SemanticType* returntype);
void analyze_stmt(Node* stmt, SemanticType* returntype);
void analyze_stmt_list(Node* stmt_list, SemanticType* returntype);
void analyze_ext_dec_list(Node* ext_dec_list, SemanticType* globaltype);
SemanticType* analyze_specifier(Node* specifier);
ParamList* analyze_def_list(Node* def_list, ParamList* paramslist);
ParamList* analyze_def(Node* def, ParamList* paramslist);
ParamList* analyze_dec_list(Node* dec_list, ParamList* paramslist, SemanticType* globaltype);
ParamList* analyze_dec(Node* dec, ParamList* paramslist, SemanticType* globaltype);
ParamList* analyze_var_dec(Node* var_dec, SemanticType* globaltype);
ParamList* analyze_param_dec(Node* param_dec, ParamList* paramslist);
SemanticType* analyze_assignment(Node* exp1, Node* _ASSIGN, Node* exp2);
SemanticType* analyze_exp(Node* exp);
SemanticType* analyze_fun_dec(Node* fun_dec, SemanticType* lasttype);
SemanticType* analyze_args(Node * args, SemanticType* func_type, Node* id);

#endif