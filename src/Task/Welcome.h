
#include "Task.h"
#include "LiquidCrystal_I2C.h"
#include <Arduino.h>

class Welcome: public Task {
  
  private:
    LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,20,4); 
    String welcome = "Welcome";    

    public:
        Welcome();
        void init(int myPeriod);
        void tick();
};