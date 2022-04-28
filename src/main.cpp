#include <Arduino.h>
#include <./Task/Welcome.h>
#include <Wire.h>

#include <./Components/Pir.h> 

Task* t0 = new Welcome();
Pir* p = new Pir(2);

void setup() {
  // put your setup code here, to run once:
  //t0->init(3000);
  pinMode(13, OUTPUT);
  
 
}
  


void loop() {
  // put your main code here, to run repeatedly:
 // t0->tick();
 if(p->isDetected()){
   digitalWrite(13, HIGH); 
 }
 else{
   digitalWrite(13, LOW); 
 }
  
}