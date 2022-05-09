#include "SelectTask.h"
#include "Arduino.h"

bool firstRead = true;
extern State currentState;
int index = 0;

SelectTask::SelectTask(){
} 
  
void SelectTask::init(int period){
    Task::init(period);
    lcd.init();
    lcd.backlight();
    lcd.setCursor(1,0);
    lcd.print(ready);
        
}
  
void SelectTask::tick(){
    if(currentState == IDLE){
        if((Bup->isPressed() || Bdown->isPressed()) && firstRead==true){
            lcd.clear();
            delay(200);
            lcd.setCursor(1,0);
            lcd.print(DrinkList[bevanda]->getName()); //stampa caffee
            
            firstRead = false;
        }
        else if(Bup->isPressed()){
            lcd.clear();
            index--;
            bevanda = index % N_DRINK;
            delay(200);
            lcd.setCursor(1,0);
            lcd.print(DrinkList[bevanda]->getName());
            
            
        }
        else if(Bdown->isPressed()){
            lcd.clear();
            index++;
            bevanda = index % N_DRINK;
            delay(200);
            lcd.setCursor(1,0);
            lcd.print(DrinkList[bevanda]->getName());

        }
    }

}