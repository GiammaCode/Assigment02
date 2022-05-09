#ifndef __WELCOMTASK__
#define __WELCOMETASK__

#include "Task.h"
#include "LiquidCrystal_I2C.h"

class WelcomeTask: public Task {
    
private:
    LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,20,4); //di default prende A4 e A5 come pin
    String welcome = "Welcome"; 
      


public:
  WelcomeTask();  
  void init(int period);  
  void tick();
};

#endif