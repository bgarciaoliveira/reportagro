#ifndef __LED_H__
#define __LED_H__

#include "Main.h"

#define LED_RED_PORT 2
#define LED_GREEN_PORT 3
#define LED_BLUE_PORT 4

void initializeLed();
static void setAllOff();
void setRedValue();
void setBlueValue();
void setGreenValue();
void setYellowValue();

#endif 