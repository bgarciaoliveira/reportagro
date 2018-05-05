#include "Main.h"

void Main(){
	Serial.begin(DEFAULT_SPEED);
	InitializeArduino();	
	InitializePushButton();
	initializeLed();		
}

void Loop(){
    pushButtonAction();
}