#include "../headers/list.h"
#include "../headers/node.h"
#include <iostream>
using namespace std;

List::List(): head(nullptr), tail(nullptr) {};
List::~List(){};

void List::push_front(int value){
  Node* newNode = new Node(value);

  if(head == nullptr && tail == nullptr){
    tail = newNode;
  };
  newNode->next = head;
  head = newNode;
};

void List::push_back(int value){
  Node *newnode = new Node(value);
   if (head == nullptr){
     head = newnode;
     tail = newnode;
   }else{
    tail->next = newnode;
    tail = tail->next;
   };
}

void List::pop(int value){

  if (head != nullptr){

    //o nó esta no começo
    if (head->value == value){
      Node *temp = head;

      //nó é o unico elemento?
      if (head == tail){
        tail = nullptr;
      }

      head = head->next;
      free(temp);
    }else{

      //Nó atual e anterior para salvar o valor do anterior
      Node *prev = head;
      Node *current = head->next;

      while (current->next != nullptr && current->value != value){
          prev = prev->next;
          current = current->next;
      }

      if (current == nullptr || current->value != value){
        cout << "Elemento nao encontrado" << endl;
        return;
      }
      cout << "Elemento excluido:" << current->value << endl;
      prev->next = current->next;
      free(current);

    }

  }
}

 void List::search(int value){
  Node *temp = head;
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

 void List::display(){
  Node *temp = head;
  while(temp != nullptr){
    cout << temp->value << "->";
    temp = temp->next;
  };
  cout << "null";
}

void List::remove_duplicates(){
    Node *current = head;

    while(current->next != nullptr ){
        Node *prev = current;
        Node *next = current->next;

        while(prev->next != nullptr){
          cout << "Anterior:" << prev->value << endl;
          cout << "Próximo: " << next->value << endl;
          prev = prev->next;
          next = next->next;
        }

        current = current->next;

    }

}