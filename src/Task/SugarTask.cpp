#include "SugarTask.h"
#include "Arduino.h"

SugarTask::SugarTask(){

}

void SugarTask::init(int period){
    Task::init(period);
    lcd.init();
    lcd.backlight();
    lcd.setCursor(1,0);
    
}

void SugarTask::tick(){
    while((Bmake->isPressed()) == false){
    lcd.print(pot->GetValue());
    }
}



