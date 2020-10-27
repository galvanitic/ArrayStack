//
// Created by Rodolfo J. Galván Martínez on 10/27/20.
//

#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() : top(-1){}

bool Stack::isEmpty() const {
  return top < 0;
}

bool Stack::push(const Item &newEntry) {
  bool result  = false;
  if (top < DEFAULT_CAPACITY - 1){
    top++;
    items[top] = newEntry;
    result = true;
  }
  return result;
}

bool Stack::pop() {
  bool result = false;
  if(!isEmpty()){
    top --;
    result = true;
  }
  return result;
}

Item Stack::peek() const {
  assert(!isEmpty());
  return items[top];
}

void Stack::display() const {
  for (int i = 0; i <= top; i++){
    cout << "    • " << items[i].getColor() << " " << items[i].getName() << endl;
  }
  cout << endl;
}
