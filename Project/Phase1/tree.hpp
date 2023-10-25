#ifndef TREE_H
#define TREE_H

#include <queue>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


using namespace std;

typedef enum NodeType{
    Type,
    Int,
    Char,
    Float,
    Id,
    TERMINAL,
    NONTERMINAL
} NodeType;


class Node{
public:
    NodeType nodetype;
    string name;
    string text;
    int line_num;
    /*union: Members share the same memory*/
    union{
        int int_value;
        char* char_value;
        float float_value;
    };
    int nodes_num = 0;
    queue<Node*> children;

    explicit Node(NodeType nodetype, string name, int nodes_num, int line_num, ...);
    //terminal
    explicit Node(string name);

    //char,type,id
    explicit Node(NodeType nodetype, char* char_value);

    //int
    explicit Node(NodeType nodetype, string name, int int_value);

    //float
    explicit Node(NodeType nodetype, string name, float float_value);        
};

void printTree(Node* root, int whiteSpace=0);

void print(Node* node, int whiteSpace);

#endif