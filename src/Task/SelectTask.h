#ifndef __SELECTTASK__
#define __SELECTTASK__

#include "Task.h"
#include "LiquidCrystal_I2C.h"
#include "./Components/Button.h"
#include "./Components/Drink.h"

const int N_DRINK = 3;
extern int nMax;


class SelectTask: public Task {
private:
    LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,20,4); //di default prende A4 e A5 come pin
    String ready = "ready";  
    Button* Bup  = new Button(6);
    Button* Bdown = new Button(7);
    Button* Bmake = new Button(8);
    Drink* coffee = new Drink("coffee", nMax);
    Drink* tea = new Drink("tea", nMax);
    Drink* chocolate = new Drink("chocolate", nMax);
    int bevanda = 0;
    

public:
  
  Drink* DrinkList [N_DRINK] = {coffee, tea, chocolate};
  SelectTask();  
  void init(int period);  
  void tick();
};

#endif