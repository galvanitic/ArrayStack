//
// Created by Rodolfo J. Galv�n Mart�nez on 10/27/20.
//

#include "Item.h"
Item::Item() {
  Name = "";
  Color = "";
}

void Item::setName(string& name) {
  Name = name;
}

void Item::setColor(string& color) {
  Color = color;
}

string Item::getName() const {
  return Name;
}

string Item::getColor() const {
  return Color;
}
