#include "Pir.h"

Pir::Pir(byte pin){
    this->pin = pin;
    lastReading = LOW;
    init();
}

void Pir::init() {
  pinMode(pin, INPUT);
  update();
}

void Pir::update() {
   
    byte newReading = digitalRead(pin);
    
    if (newReading != lastReading) {
      lastDebounceTime = millis();
    }

    if (millis() - lastDebounceTime > debounceDelay) {
      // Update the 'state' attribute only if debounce is checked
      state = newReading;
    }

    lastReading = newReading;
}

byte Pir::getState() {
  update();
  return state;
}

bool Pir::isDetected() {
  return (getState() == HIGH);
}
