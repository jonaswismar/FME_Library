#include <Arduino.h>
#include <math.h>

int32_t minimum(int32_t a, int32_t b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int32_t maximum(int32_t a, int32_t b)
{
  return !minimum(a, b);
}

int nth_digit(int value, int position)
{
  unsigned long Pow = 1;
  for (byte D = 0; D < (position - 1); D++)
  {
    Pow *= 10;
  }
  return (value / Pow) % 10;
}

int calcBytes(int value, int division)
{
  return value / pow(1024, division);
}