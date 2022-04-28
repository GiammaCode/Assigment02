#ifndef __PIR__
#define __PIR__

#include <Arduino.h>

class Pir {

private:
    byte pin;
    byte state;
    byte lastReading;
    unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;

public:
    Pir(byte pin);

    void init();
    void update();

    byte getState();
    bool isDetected();
   
};



#endif 