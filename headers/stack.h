//
// Created by Karen on 04/02/2025.
//

#ifndef STACK_H
#define STACK_H
#include "nodechar.h"
#include <iostream>

class Stack {
   public:
      NodeChar *top;
      Stack();
      ~Stack();
      void push(char value);
      void pop();
      void display();
      void search(char value);
};
#endif //STACK_H
