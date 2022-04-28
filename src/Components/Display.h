#ifndef __DIPLAY__
#define __DISPLAY__
#include <Arduino.h>


class Display {

private:
    byte sda;
    byte scl;

public: 
    Display (byte sda, byte scl);

    void init();

    void print(int r, int c, String s);
};
#endif