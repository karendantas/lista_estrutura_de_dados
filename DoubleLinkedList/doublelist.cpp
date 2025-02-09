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
    head = tail = newNode;
  };
  head->prev = newNode;
  newNode->next = head;
  head = newNode;

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

    }else{

      //Nó atual
      Doublenode *current = head->next;

      while (current != nullptr && current->value != value){
          current = current->next;
      }

      if (current == nullptr || current->value != value){
        cout << "Elemento nao encontrado" << endl;
        return;
      }
      cout << "Elemento excluido:" << current->prev << endl;
      Doublenode *prev = current->prev;
      cout << "Prev:" << prev->value << endl;
      prev->next = current->next;


    }

  }
}

void DoubleList::search(int value){
  Doublenode *temp = head;
  Doublenode *found = nullptr;
  while(temp != nullptr){
    if(temp->value == value){
      found = temp;
    };
    temp = temp->next;
  };

  if (found != nullptr){
    Doublenode *prev = found->prev;
    Doublenode *next = found->next;
    cout << "Elemento: " << found->value << endl;
    cout << "Anterior: " << prev->value << endl;
    cout << "Proximo: " << next->value << endl;
  }else{
    cout << "Elemento nao encontrado" << endl;
    return;
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

void DoubleList::add_ordenade(int value){
   Doublenode *newnode = new Doublenode(value);
  //novo nó é o primeiro elemento
  if (head == nullptr && tail == nullptr){
    head = tail = newnode;
    return;
  }

  //novo é menor que head
  if (value <= head->value ){
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    return;
  }

  //novo nó é maior que tail
  if (value >=tail->value ){
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
    return;
  }

  //no meio
    Doublenode *current = head;
    while(current != nullptr){
      if (value <= current->value ){
        Doublenode *prev = current->prev;

        prev->next = newnode;
        newnode->prev = prev;
        newnode->next = current;
        current->prev = newnode;
        return;
      }else{

      }
      current = current->next;
    }


}