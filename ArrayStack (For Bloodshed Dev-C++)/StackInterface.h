//
// Created by Rodolfo J. Galván Martínez on 10/27/20.
//

#ifndef LAB2_STACKINTERFACE_H
#define LAB2_STACKINTERFACE_H
#include "Item.h"

class StackInterface{
public:
    /**
     * isEmpty()
     * Returns boolean whether the Stack is empty or not.
     *
     * @param none
     * @return boolean
     */
    virtual bool isEmpty() const = 0;

    /**
     * push()
     * Adds an item to the stack.
     *
     * @param newEntry, the item to be added to the top of the stack.
     * @return boolean whether the push was successful or not.
     */
    virtual bool push(const Item& newEntry) = 0;

    /**
     * pop()
     * Removes an item from the top of the stack.
     *
     * @param none
     * @return boolean whether the item was removed.
     */
    virtual bool pop() = 0;

    /**
     * peek()
     * Returns the item at the top of the stack.
     *
     * @param none
     * @return Item at the top of the stack.
     */
    virtual Item peek() const = 0;

    /**
     * display()
     * Prints out the entire stack.
     *
     * @param none
     * @return Returns nothing. Prints out strings.
     */
    virtual void display() const = 0;

    virtual ~StackInterface(){
	};
};
#endif //LAB2_STACKINTERFACE_H
