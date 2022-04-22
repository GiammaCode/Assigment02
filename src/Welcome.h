#ifndef __TASK__
#define __TASK__

#include "Task.h"

class Welcome: public Task {
  
  int pin;

    void tick();
    void init(int pertiod);
    
};
#endif