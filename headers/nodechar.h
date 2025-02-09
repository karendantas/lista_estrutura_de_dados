//
// Created by Karen on 05/02/2025.
//

#ifndef NODECHAR_H
#define NODECHAR_H
#include <iostream>
using namespace std;
class NodeChar{
    public:
        char value;
        NodeChar *next;
        NodeChar(char v);
        ~NodeChar();

};

#endif //NODECHAR_H
