#include <iostream>
#include "Item.h"
#include "Stack.h"
using namespace std;
void menu();
int main() {
  char choice;
  cout << ">> Please hold while I create an empty stack..." << endl;
  Stack newStack;
  cout << ">> Thanks for holding. The stack is ready!" << endl;
  cout << "---------------------------------------------------------------" << endl;

  do {
    menu();
    cout << "\n   What would you like to do?: ";
    cin  >> choice;
    if (choice == '1'){
      // code to test push()
      string name;
      string color;
      Item newItem;
      cout << "    >> What's the name of the item? ";
      cin >> name;
      newItem.setName(name);

      cout << "    >> What's the color of the item? ";
      cin >> color;
      newItem.setColor(color);

      if(newStack.push(newItem)){
        cout << "    >> The stack item was successfully pushed to the stack! \n\n";
      }else{
        cout << "    >> Something went wrong. \n\n";
      }

    }
    else if (choice == '2'){
      // code to test pop()
      if (newStack.pop())
      {
        cout << "    >> The top item was successfully removed!\n\n";
      }else{
        cout << "    >> Good try but the stack is already empty.\n\n";
      }

    }
    else if (choice == '3'){
      // code to test peek()
      cout << "    >> The top of stack holds a " << newStack.peek().getColor() << " " << newStack.peek().getName() << endl << endl;
    }
    else if (choice == '4'){
      // code to test isEmpty()
      if (newStack.isEmpty()){
        cout << "    >> The stack is empty.\n\n";
      }else{
        cout << "    >> The stack contains items.\n\n";
      }
    }
    else if (choice == '5'){
      // code to test display()
      newStack.display();
    }
    else if (choice == '6'){
      cout << endl << "Exiting..." << endl << endl;
    }
    else{
      cout << endl << "Not a valid option" << endl << endl;
    }
  } while (choice != '6');
  return 0;
}

void menu(){
  cout << ">> Please choose one of the following:\n"
       << "   • 1 - Add an item to the stack.\n"
       << "   • 2 - Remove an item from the stack.\n"
       << "   • 3 - Look at the last item placed on the stack.\n"
       << "   • 4 - Check to see if the stack is empty.\n"
       << "   • 5 - Display the entire stack.\n"
       << "   • 6 - Exit" << endl;
}