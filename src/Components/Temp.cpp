#include "Temp.h"

Temp::Temp(byte pin){
    this->pin;

}
void Temp::init(){
    pinMode(pin, INPUT);

}

double Temp::getTemp(){
    int value = analogRead(A0);
  
  /* value : 1023 = value_in_mV : 5000 */
  /* value_in_mV = 5000/1023 * value */
  
    int value_in_mV = 4.8876 * value; 

  /* value_in_C = value_in_mV / 10 (since we have 10 mV => 1 °C ) */

    double value_in_C = value_in_mV * 0.1;
    return value_in_C;

}