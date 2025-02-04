
#ifndef DOUBLENODE_H
#define DOUBLENODE_H
#include <iostream>

class Doublenode {
     public:
       int value;
       Doublenode *next;
       Doublenode *prev;
       Doublenode(int v);
       ~Doublenode();
};
#endif //DOUBLENODE_H
