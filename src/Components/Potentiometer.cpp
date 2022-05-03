#include "Potentiometer.h"


Potentiometer::Potentiometer(byte pin){
    this->pin = pin;

}

void Potentiometer::init(){
    pinMode(pin, INPUT);
}

int Potentiometer::GetValue(){
    int val = analogRead(pin);
    return map(val, 0, 1023, 0, 6);
}