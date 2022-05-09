#ifndef __SUGARTASK__
#define __SUGARTASK__

#include "Task.h"
#include "LiquidCrystal_I2C.h"
#include "Components/Potentiometer.h"
#include "Components/Button.h"

class SugarTask: public Task {
    private:
        LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,20,4); //di default prende A4 e A5 come pin
        Potentiometer* pot = new Potentiometer(A0);
        Button* Bmake = new Button(8);
        int sugarQuantity;

    public:
        SugarTask();
        void init(int period);  
        void tick();

};

#endif




