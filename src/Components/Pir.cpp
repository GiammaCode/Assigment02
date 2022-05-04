#include "Pir.h"

Pir::Pir(byte pin){
    this->pin = pin;
    init();
}

void Pir::init() {
  pinMode(pin, INPUT);
}

byte Pir::getState() {
  byte state = digitalRead(pin);

  
  return state;
}


