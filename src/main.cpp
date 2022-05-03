#include <Arduino.h>
#include <./Task/Welcome.h>
#include <Wire.h>
#include <stdio.h>

#include <./Components/Pir.h> 
#include <./Components/ServoMotorImpl.h>
#include <./Components/Sonar.h>
#include <./Components/Display.h> 
#include <./Components/Potentiometer.h> 
#include <./Components/Temp.h> 
#include <Servo.h>



Task* t0 = new Welcome();
Pir* p = new Pir(2);
ServoMotor* motor = new ServoMotorImpl(3);
Sonar* sonar = new Sonar(4,5);
Potentiometer* pot = new Potentiometer(A0);
Temp* temp = new Temp(A1);

int pos = 0;


void setup() {
  // put your setup code here, to run once:
  t0->init(3000);
  motor->on();  
  sonar->init();
  Serial.begin(9600);
  Serial.println("init");
  pot->init();
  temp->init();
   
}
  


void loop() {
  // put your main code here, to run repeatedly:
  t0->tick();
  Serial.print("dist:  ");
  Serial.println(sonar->getDistance());
  Serial.print("pot:  ");
  Serial.println(pot->GetValue());
  Serial.print("temp:  ");
  Serial.println(temp->getTemp());
  delay(2000);
  
}