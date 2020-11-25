//
// Created by Rodolfo J. Galv�n Mart�nez on 10/27/20.
//

#ifndef LAB2_ITEM_H
#define LAB2_ITEM_H
#include "string"
using namespace std;

class Item {
private:
    string Name;
    string Color;
public:
    //Constructors
    Item();

    //Setters
    void setName(string& name);
    void setColor(string& color);

    //Getters
    string getName() const;
    string getColor() const;

};


#endif //LAB2_ITEM_H
