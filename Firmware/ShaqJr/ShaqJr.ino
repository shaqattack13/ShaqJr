#include "ShaqJrPower.h"

ShaqJrPower pwr;

void setup()
{
  pwr.begin();
}

void loop()
{
  pwr.isCharging();
  pwr.getBatteryVoltage();

  //print this information to watch screen
}
