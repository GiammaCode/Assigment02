#ifndef __SONAR__
#define __SONAR__

#include <Arduino.h>

class Sonar {
    private:
        const float vs = 331.45 + 0.62*20;
        byte trigPin;
        byte echoPin;

    public:

        Sonar(byte trigPin, byte echoPin);

        void init();
        float getDistance();
};







#endif