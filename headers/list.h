#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "node.h"
class List{
    public:
      Node *head;
      Node *tail;
      List();
      ~List();
      void push_front(int value);
      void push_back(int value);
      //void push_middle(int value);
      void pop(int value);
      void search(int value);
      void display();
      void remove_duplicates();

};
#endif //LIST_H
