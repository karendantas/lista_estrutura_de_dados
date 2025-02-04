#include "../headers/doublenode.h"
#include <iostream>
using namespace std;

Doublenode::Doublenode(int v):value(v), next(nullptr), prev(nullptr) {};

Doublenode::~Doublenode(){
    delete next;
    delete prev;
}