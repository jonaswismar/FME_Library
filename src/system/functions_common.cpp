#include <Arduino.h>

#include "variables_common.h"

void deepSleep(int sleepTime)
{
  ESP.deepSleep(sleepTime);
}

void restart()
{
  ESP.restart();
}