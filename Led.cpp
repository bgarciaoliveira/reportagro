#include "Led.h"

void initializeLed(){
	pinMode(LED_RED_PORT, OUTPUT);
	pinMode(LED_GREEN_PORT, OUTPUT);
	pinMode(LED_BLUE_PORT, OUTPUT);

	setRedValue();
}

static void setAllOff(){
	digitalWrite(LED_GREEN_PORT, false);
	digitalWrite(LED_BLUE_PORT, false);
	digitalWrite(LED_RED_PORT, false);	
}

void setRedValue(){
	setAllOff();
	digitalWrite(LED_GREEN_PORT, false);
	digitalWrite(LED_BLUE_PORT, false);
	digitalWrite(LED_RED_PORT, true);	
}

void setBlueValue(){
	setAllOff();
	digitalWrite(LED_GREEN_PORT, true);
	digitalWrite(LED_RED_PORT, false);
	digitalWrite(LED_BLUE_PORT, false);	
}

void setGreenValue(){
	setAllOff();
	digitalWrite(LED_GREEN_PORT, false);
	digitalWrite(LED_RED_PORT, false);
	digitalWrite(LED_BLUE_PORT, true);
}

void setYellowValue(){
	setAllOff();
	digitalWrite(LED_BLUE_PORT, true);
	digitalWrite(LED_GREEN_PORT, false	);
	digitalWrite(LED_RED_PORT, true);
}
