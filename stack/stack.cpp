//
// Created by Karen on 04/02/2025.
//
#include "../headers/stack.h"
#include "../headers/node.h"
#include <iostream>
using namespace std;
Stack::Stack(): top(nullptr){};
Stack::~Stack(){};

void Stack::push(char value){
    Node *newNode = new Node(value);
      newNode->next = top;
      top = newNode;
}

void Stack::pop(){
  if (top == nullptr){
    cout << "Pilha está vazia" << endl;
    return;
  }
  Node *temp = top;
  top = top->next;
  delete temp;

}

void Stack::display(){
 Node *temp = top;
 while (temp != nullptr){
   cout << temp->value << " ";
   temp = temp->next;
 }

}

void Stack::displayinverse(){

}
