#include "Drink.h"
Drink::Drink(String name, int quantity) {
  this->name = name;
  this->quantity = quantity;
}

String Drink::getName(){
    return this->name;
}

int Drink::getQuantity(){
    return this->quantity;
}