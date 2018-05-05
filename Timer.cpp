#include "Timer.h"

void ProcessTimer(){
	static uint32_t timer = millis();
	static uint32_t buttonTimer = millis();

	if((millis() - timer) >= PUSH_BUTTON_READ_INTERVAL){
		pushButtonAction();
		
		buttonTimer = millis();
	}

	if((millis() - timer) >= TIMER_INTERVAL){
		timer = millis(); 
	}
}

