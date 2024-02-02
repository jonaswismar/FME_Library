#include <Arduino.h>

#include "variables.h"

void deepSleep(int sleepTime)
{
  ESP.deepSleep(sleepTime);
}

void restart()
{
  ESP.restart();
}