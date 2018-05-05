#include "Arduino.h"

st_Arduino Arduino;
st_InSession InSession;

void InitializeArduino(){
  	memset(&Arduino, 0, sizeof(Arduino));	
  	memset(&InSession, 0, sizeof(InSession));

  	ReadConfigurations();    
}

void WriteConfigurations(){
	 eewrite(0, Arduino);
}

void ReadConfigurations(){
	 eeread(0, Arduino);
}