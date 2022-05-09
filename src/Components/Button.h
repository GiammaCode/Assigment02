#ifndef __BUTTON__
#define __BUTTON__
#include <Arduino.h>
class Button {
  
  private:
    byte pin;
    byte state;
    byte lastReading;
    unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 100;
    
  public:
    Button(byte pin);
    void init();
    void update();
    byte getState();
    bool isPressed();
};
#endif