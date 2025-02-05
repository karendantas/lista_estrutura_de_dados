#include <iostream>
#include "headers/node.h"
#include "headers/list.h"
#include "headers/doublenode.h"
#include "headers/doublelist.h"
#include "headers/circularlinkedlist.h"
#include "headers/stack.h"
using namespace std;

int main (){

  List lista;
  lista.push_front(7);
  lista.push_back(2);
  lista.push_back(3);
  lista.push_front(1);
  lista.push_front(3);
  lista.display();
  cout << endl << endl;

  //lista.search(21);

  lista.remove_duplicates();
  lista.display();

  //DoubleList lista;
  //lista.push_front(3);
  //lista.push_front(4);
  //lista.push_front(5);
  //lista.push_back(2);

  //Doublenode *penultimo = lista.tail->prev;
  //cout << penultimo->value<< endl;
  //lista.display();

//  CircularLinkedList circularlist;
//
//  circularlist.push_front(4);
//  circularlist.display();

//  Stack stack1;
//
//  stack1.push('K');
//  stack1.push('A');
//  stack1.push('R');
//  stack1.push('R');
//  stack1.push('E');
//  stack1.push('N');
//  stack1.display();

  return 0;



}