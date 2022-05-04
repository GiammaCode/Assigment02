#ifndef __PIR__
#define __PIR__

#include <Arduino.h>

class Pir {

private:
    byte pin;
    byte state;


public:
    Pir(byte pin);

    void init();
   

    byte getState();
 
   
};



#endif 