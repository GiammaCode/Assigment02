#ifndef __PIR__
#define __PIR__

#include <Arduino.h>

class Pir
{
private:
    byte pin;
    byte state;
    byte laststate;

public:
    Pir(byte pin);

    void init();
    void update();

    byte getState();
    bool isDetected();
   
};



#endif 