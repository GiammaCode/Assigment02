#ifndef __DRINK__
#define __DRINK__
#include <Arduino.h>

class Drink {
      
  private:
    String name;
    int quantity;
  public:
    Drink(String name, int quantity);
    String getName();
    int getQuantity();
};
#endif