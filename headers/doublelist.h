
#ifndef DOUBLELIST_H
#define DOUBLELIST_H
#include "doublenode.h"
#include <iostream>

class DoubleList{
public:
    Doublenode *head;
    Doublenode *tail;
    DoubleList();
    ~DoubleList();
    void push_front(int value);
    void push_back(int value);
    //void push_middle(int value);
    void pop(int value);
    void search(int value);
    void display();
    void remove_duplicates();

};
#endif //DOUBLELIST_H
