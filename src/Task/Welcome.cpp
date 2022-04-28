#include "Welcome.h"


Welcome::Welcome(){
    //forse init
}

void Welcome::init(int myPeriod){
    Task::init(myPeriod);
    lcd.init();
    lcd.backlight();
}

void Welcome::tick(){
    lcd.setCursor(1,0);
    lcd.print(welcome);
}