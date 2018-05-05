#ifndef __WATCHDOG_H__
#define __WATCHDOG_H__

#include "Main.h"

#define TIMER_INTERVAL                 1000L    //intervalo de tempos em que os timers sao chamados (em ms)
#define CLOCKS_PER_SEC                 1000L

#define PUSH_BUTTON_READ_INTERVAL      900L

void ProcessTimer();

#endif