#include "Pir.h"

 Pir::Pir(byte pin){
     this->pin;
 }

 void Pir::init(){
     pinMode(pin, INPUT);
 }

byte Pir::getState(){

}

bool Pir::isDetected(){

}

