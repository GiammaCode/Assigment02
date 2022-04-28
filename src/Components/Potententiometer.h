#ifndef __POT__
#define __POT__

#include <Arduino.h>

class Potentiometer{

    private:
        byte pin;

    public:

        Potentiometer(byte pin);

        void init();

        int GetValue();
};

#endif