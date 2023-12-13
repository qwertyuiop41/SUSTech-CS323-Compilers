#include "tree.hpp"

Node::Node(string name, int nodes_num, int line_num, ...) : nodetype(NONTERMINAL), name(name), nodes_num(nodes_num), line_num(line_num)
{
    va_list childnodes;
    va_start(childnodes, line_num);
    for (int i = 0; i < nodes_num; i++)
    {
        Node *node = (Node *)va_arg(childnodes, Node *);
        this->children.push_back(node);
    }
    va_end(childnodes);
}

Node::Node(NodeType nodetype, char *char_value, int line_num) : nodetype(nodetype), line_num(line_num)
{
    this->char_value = new char[100];
    memcpy(this->char_value, char_value, strlen(char_value));
}

Node::Node(string name, int line_num) : nodetype(TERMINAL), name(name), line_num(line_num)
{
}

Node::Node(NodeType nodetype, string name, int int_value, int line_num) : nodetype(nodetype), int_value(int_value), line_num(line_num)
{
    this->name = string(name);
}

Node::Node(NodeType nodetype, string name, float float_value, int line_num) : nodetype(nodetype), float_value(float_value), line_num(line_num)
{
    this->name = string(name);
}

void printTree(Node *root, int space)
{
    printf("%s (%d)\n", root->name.c_str(), root->line_num);
    for (auto&& child : root->children)
    {
        print(child, space + 2);
    }
}

void print(Node *node, int space)
{
    if(node->nodes_num == 0 && node->nodetype == NONTERMINAL){
        return;
    }
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    switch (node->nodetype)
    {
    case Type:
    {
        printf("TYPE: %s\n", node->char_value);
        break;
    }
    case Int:
    {
        printf("INT: %s\n", node->name.c_str());
        break;
    }
    case Char:
    {
        printf("CHAR: %s\n", node->char_value);
        break;
    }
    case Float:
    {
        printf("FLOAT: %s\n", node->name.c_str());
        break;
    }
    case Id:
    {
        printf("ID: %s\n", node->char_value);
        break;
    }
    case TERMINAL:
    {
        printf("%s\n", node->name.c_str());
        break;
    }
    case NONTERMINAL:
    {
        printTree(node, space);
        break;
    }
    }
}

void printNodeName(Node* node){
    switch (node->nodetype)
    {
    case Type:
    {
        printf("TYPE: %s\n", node->char_value);
        break;
    }
    case Int:
    {
        printf("INT: %s\n", node->name.c_str());
        break;
    }
    case Char:
    {
        printf("CHAR: %s\n", node->char_value);
        break;
    }
    case Float:
    {
        printf("FLOAT: %s\n", node->name.c_str());
        break;
    }
    case Id:
    {
        printf("ID: %s\n", node->char_value);
        break;
    }
    case TERMINAL:
    {
        printf("TERMINAL %s\n", node->name.c_str());
        break;
    }
    case NONTERMINAL:
    {
        printf("NONTERMINAL %s\n", node->name.c_str());
        break;
    }
    }
}

Node* nextNode(Node* node){
    Node* ret = node->children.front();
    node->children.pop_front();
    node->children.push_back(ret);
    return ret;
}