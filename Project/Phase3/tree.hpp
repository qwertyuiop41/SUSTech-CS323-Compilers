#ifndef TREE_HPP
#define TREE_HPP

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
    int line_num;
    union{
        int int_value;
        char* char_value;
        float float_value;
    };
    int nodes_num = 0;
    deque<Node*> children;
    vector<string> ir;

    explicit Node(string name, int nodes_num, int line_num, ...);

    explicit Node(string name, int line_num);

    explicit Node(NodeType nodetype, char* char_value, int line_num);

    explicit Node(NodeType nodetype, string name, int int_value, int line_num);

    explicit Node(NodeType nodetype, string name, float float_value, int line_num);        
};

void printTree(Node* root, int space=0);

void print(Node* node, int space);

Node* nextNode(Node *);

void printNodeName(Node*);
#endif