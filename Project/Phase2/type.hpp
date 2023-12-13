#ifndef TYPE_HPP
#define TYPE_HPP

#include "tree.hpp"

enum Category{
    PRIMITIVE, ARRAY, STRUCTURE, FUNCTION
};

class Array;

class ParamList;

class SemanticType{
public:
    NodeType nodetype;
    Array* array_ptr = nullptr;
    ParamList* params_ptr = nullptr;   
    Category category;

    SemanticType(Category category, NodeType nodetype);
    SemanticType(Category category, Array* array_ptr);
    SemanticType(Category category, ParamList* params_ptr);

};

class Array {
public:
    SemanticType *base;
    int size;
    Array(SemanticType *base, int size);
};

class ParamList{
public:
    string name;
    SemanticType *type_ = nullptr;
    ParamList* next = nullptr;
    ParamList(string name, SemanticType* type_, ParamList* next);
};

SemanticType* getPrimitiveType(Node* node);
bool type_eq(SemanticType* globaltype1, SemanticType* globaltype2);
#endif