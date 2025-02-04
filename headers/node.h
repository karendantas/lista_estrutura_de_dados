#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node{
    public:
    int value;
    Node *next;
    Node(int v);
    ~Node();

};
#endif //NODE_H
