#include "PushButton.h"

void InitializePushButton(){
	pinMode(PushButtonPort, INPUT);
}

void pushButtonAction(){
	bool buttonClicked = digitalRead(PushButtonPort);

	if(buttonClicked){
		setBlueValue();

		delay(7000);

		setRedValue();
	}

	delay(1000);
}
