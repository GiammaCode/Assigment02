#include <Arduino.h>
#include <Wire.h>
#include <stdio.h>
#include <State.h>

#include<./Task/SelectTask.h>

//variabili globali 
int nMax {};
State currentState = IDLE;
Task* task = new SelectTask();

void setup() {
  // put your setup code here, to run once:
  task->init(10000);
  
}

  


void loop() {
  // put your main code here, to run repeatedly:
  task->tick();
  
  
}