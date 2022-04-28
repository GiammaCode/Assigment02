
#include "Task.h"

class Welcome: public Task {
  
  int pin;

    void tick();
    void init(int pertiod);
    
};