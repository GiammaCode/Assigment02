#include "Sonar.h"

Sonar:: Sonar(byte trigPin, byte echoPin){
    this->trigPin = trigPin;
    this->echoPin = echoPin;
    init();
}

void Sonar::init(){
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT);
}

float Sonar::getDistance(){
    digitalWrite(trigPin,LOW);
    delayMicroseconds(3);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(5);
    digitalWrite(trigPin,LOW);
    
    /* ricevi l’eco */
    float tUS = pulseIn(echoPin, HIGH);
    float t = tUS / 1000.0 / 1000.0 / 2;
    float d = t*vs;
    return d;
}
