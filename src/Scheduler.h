#ifndef __SCHEDULER__
#define __SCHEDULER__

#include "Task/Task.h"
#include "Timer.h"

#define MAX_TASKS 50

class Scheduler {
  
  int basePeriod;
  int nTasks;
  Task* taskList[MAX_TASKS];  
  Timer timer;

public:
  void init(int basePeriod);  
  virtual bool addTask(Task* task);  
  virtual void schedule();
};

#endif