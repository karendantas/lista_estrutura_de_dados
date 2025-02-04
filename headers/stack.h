//
// Created by Karen on 04/02/2025.
//

#ifndef STACK_H
#define STACK_H
#include "node.h"
#include <iostream>

class Stack {
   public:
      Node *top;
      Stack();
      ~Stack();
      void push(int value);
      void pop();
      void display();
      void search(int value);
      void displayinverse();
};
#endif //STACK_H
