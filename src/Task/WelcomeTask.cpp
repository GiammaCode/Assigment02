#include "WelcomeTask.h"
#include "Arduino.h"

const int NMAX = 5;
extern int nMax;
extern State currentState;

WelcomeTask::WelcomeTask(){
   
}
  
void WelcomeTask::init(int period){
    Task::init(period);
    lcd.init();
    lcd.backlight();
}
  
void WelcomeTask::tick(){
    if(currentState == WELCOME){
      lcd.setCursor(1,0);
      lcd.print(welcome);
      nMax = NMAX;
      currentState = IDLE;
    }
  
}