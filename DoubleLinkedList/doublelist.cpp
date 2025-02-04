#include "../headers/doublelist.h"
#include "../headers/doublenode.h"
#include <iostream>
using namespace std;

DoubleList::DoubleList(): head(nullptr), tail(nullptr) {};
DoubleList::~DoubleList(){};

void DoubleList::push_front(int value){
  Doublenode* newNode = new Doublenode(value);

  //se for o unico elemento
  if(head == nullptr && tail == nullptr){
    tail = newNode;
  };
  newNode->next = head;
  newNode->prev = nullptr;
  head = newNode;
  head->prev = nullptr;

};

void DoubleList::push_back(int value){
  Doublenode *newnode = new Doublenode(value);
  //se for o único elemento
   if (head == nullptr){
     head = newnode;
     tail = newnode;
     newnode->prev = head;
   }else{
    newnode->prev = tail;
    tail->next = newnode;
    tail = tail->next;
   };
}

void DoubleList::pop(int value){

  if (head != nullptr){

    //o nó esta no começo
    if (head->value == value){
      Doublenode *temp = head;

      //nó é o unico elemento?
      if (head == tail){
        tail = nullptr;
      }

      head = head->next;
      free(temp);
    }else{

      //Nó atual
      Doublenode *current = head->next;

      while (current->next != nullptr && current->value != value){
          current = current->next;
      }

      if (current == nullptr || current->value != value){
        cout << "Elemento nao encontrado" << endl;
        return;
      }
      cout << "Elemento excluido:" << current->value << endl;
      Doublenode *prev = current->prev;
      prev->next = current->next;
      free(current);

    }

  }
}

void DoubleList::search(int value){
  Doublenode *temp = head;
  int found = false;
  while(temp != nullptr){
    if(temp->value == value){
      found = true;
    };
    temp = temp->next;
  };

  if (found){
    cout << "Elemento encontrado" << endl;
  }else{
    cout<< "Elemento nao encontrado." << endl;
  }
}

void DoubleList::display(){
  Doublenode *temp = head;
  while(temp != nullptr){
    cout << temp->value << "->";
    temp = temp->next;
  };
  cout << "null";
}

void DoubleList::remove_duplicates(){
    Doublenode *current = head;

    while(current->next != nullptr ){
        Doublenode *prev = current;
        Doublenode *next = current->next;

        while(prev->next != nullptr){
          cout << "Anterior:" << prev->value << endl;
          cout << "Próximo: " << next->value << endl;
          prev = prev->next;
          next = next->next;
        }

        current = current->next;

    }

}