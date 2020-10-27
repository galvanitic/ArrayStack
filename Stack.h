//
// Created by Rodolfo J. Galván Martínez on 10/27/20.
//

#ifndef LAB2_STACK_H
#define LAB2_STACK_H
#include "StackInterface.h"
#include "Item.h"

class Stack : public StackInterface {
private:
    static const int DEFAULT_CAPACITY = 11;
    Item items[DEFAULT_CAPACITY];
    int top;
public:
    Stack();
    bool isEmpty() const override;
    bool push(const Item& newEntry) override;
    bool pop() override;
    Item peek() const override;
    void display() const override;
};


#endif //LAB2_STACK_H
