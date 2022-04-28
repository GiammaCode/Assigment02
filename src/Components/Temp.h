#ifndef __TEMP__
#define __TEMP__

#include <Arduino.h>

class Temp {

    private:
        byte pin;
    
    public:
        Temp(byte pin);
        void init();
        double getTemp();



};


#endif