#include "../headers/node.h"
#include <iostream>
using namespace std;

Node::Node(int v):value(v), next(nullptr){};

Node::~Node(){
  delete next;
}