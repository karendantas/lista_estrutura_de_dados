#include <iostream>
#include "headers/node.h"
#include "headers/list.h"
#include "headers/doublenode.h"
#include "headers/doublelist.h"
#include "headers/circularlinkedlist.h"
#include "headers/stack.h"
#include "map"
using namespace std;

int main (){

//  List lista;
//  lista.push_front(7);
//  lista.push_back(2);
//  lista.push_back(3);
//  lista.push_front(1);
//  lista.push_front(3);
//  lista.display();
//  cout << endl << endl;
//
//  //lista.search(21);
//
//  lista.remove_duplicates();
//  lista.display();

//  CircularLinkedList circularlist;
//
//  circularlist.push_front(4);
//  circularlist.display();

//  Stack stack1;
//
//  string espression = "((4+2) + 2";
//  map<char, char>pares = { {'(', ')'} };
//
//  for (char l : espression){
//      if ( l == '(') {
//          stack1.push(l);
//      }else if (l == ')'){
//
//        if (stack1.top == nullptr){
//            cout << "Inválido";
//        }
//
//        NodeChar *t = stack1.top;
//        char topo = t->value;
//        stack1.pop();
//
//        if (pares[topo] != l){
//          cout << "Inválido";
//         }
//      }
//  }

//  if (stack1.top == nullptr){
//    cout << "Expressão valida";
//  }else{
//      stack1.display();
//  }

  DoubleList lista;
//  lista.push_front(3);
//  lista.push_front(4);
//  lista.push_front(5);
//  lista.push_back(2);
//  lista.display();
//
//  cout << endl;
////  lista.pop(5);
////  lista.display();
//  cout << endl;
//  lista.pop(3);
//  lista.display();

  lista.add_ordenade(4);
  lista.add_ordenade(3);
  lista.add_ordenade(5);
  lista.add_ordenade(1);
  lista.add_ordenade(2);
  lista.display();
  cout << endl;
  lista.search(4);
  cout << endl;
  cout << lista.tail->prev;

  return 0;



}