#ifndef __PUSH_BUTTON_H__
#define __PUSH_BUTTON_H__

#include "Main.h"

static const byte PushButtonPort = 7;

void InitializePushButton();
void pushButtonAction();

#endif