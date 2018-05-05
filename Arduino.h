#ifndef __ARDUINO_H__
#define __ARDUINO_H__

#include "Main.h"

typedef struct { 
  //estrutura que é gravada na eeprom 

} st_Arduino;

typedef struct{

} st_InSession;

extern st_Arduino Arduino;
extern st_InSession InSession;

void InitializeArduino();
void ReadConfigurations();

#endif