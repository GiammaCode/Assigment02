#ifndef __DIPLAY__
#define __DISPLAY__
#include <Arduino.h>


class Display {

private:
    byte sda;
    byte scl;

public: 
    Display();

    Display (byte sda, byte scl);

    void print();

    void init();





};
#endif