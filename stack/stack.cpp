//
// Created by Karen on 04/02/2025.
//
#include "../headers/stack.h"
#include "../headers/nodechar.h"
#include <iostream>
using namespace std;
Stack::Stack(): top(nullptr){};
Stack::~Stack(){};

void Stack::push(char value){
    NodeChar *newNode = new NodeChar(value);
      newNode->next = top;
      top = newNode;
}

void Stack::pop(){
  if (top == nullptr){
    cout << "Pilha está vazia" << endl;
    return;
  }
  top = top->next;
}

void Stack::display(){
 NodeChar *temp = top;
 while (temp != nullptr){
   cout << temp->value << " ";
   temp = temp->next;
  cout << endl;
 }
}

