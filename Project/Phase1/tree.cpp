#include "tree.hpp"

Node::Node(NodeType nodetype, string name, int nodes_num, int line_num, ...) : nodetype(nodetype), name(name), nodes_num(nodes_num), line_num(line_num)
{
    //Variadic list
    va_list childnodes;
    va_start(childnodes, nodes_num);
    for (int i = 0; i < nodes_num; i++)
    {
        Node *node = (Node *)va_arg(childnodes, Node *);
        this->children.push(node);
    }
    va_end(childnodes);
}

Node::Node(NodeType nodetype, char *char_value) : nodetype(nodetype)
{
    this->char_value = new char[100];
    memcpy(this->char_value, char_value, strlen(char_value));
}

Node::Node(string name) : nodetype(TERMINAL), name(name)
{
}

Node::Node(NodeType nodetype, string name, int int_value) : nodetype(nodetype), int_value(int_value)
{
    this->name = string(name);
}

Node::Node(NodeType nodetype, string name, float float_value) : nodetype(nodetype), float_value(float_value)
{
    this->name = string(name);
}

void printTree(Node *root, int whiteSpace)
{
    printf("%s (%d)\n", root->name.c_str(), root->line_num);
    int nodes_num = root->nodes_num;
    queue<Node *> nodes_queue = root->children;
    for (int i = 0; i < nodes_num; i++)
    {
        Node *node = nodes_queue.front();
        print(node, whiteSpace + 2);
        nodes_queue.pop();
    }
}

void print(Node *node, int whiteSpace)
{
    if(node->nodes_num == 0 && node->nodetype == NONTERMINAL){
        return;
    }
    for (int i = 0; i < whiteSpace; i++)
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
        printf("INT: %d\n", node->int_value);
        break;
    }
    case Char:
    {
        printf("CHAR: %s\n", node->char_value);
        break;
    }
    case Float:
    {
        printf("FLOAT: %.1f\n", node->float_value);
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
        printTree(node, whiteSpace);
        break;
    }
    }
}