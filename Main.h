#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <string.h>
#include <EEPROM.h>
#include <Arduino.h>

#define MAX_RELAY 10
#define DEFAULT_SPEED 9600

#include "IO.h"
#include "Arduino.h"
#include "Timer.h"
#include "Led.h"
#include "PushButton.h"

void Main();
void Loop();

#endif