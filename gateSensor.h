// gateSensor.h

#ifndef _GATESENSOR_h
#define _GATESENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class gateSensor {
private:
	int m_inputPin = 0;



public:
	gateSensor(int InPin) : m_inputPin {InPin}
	{}

	 



};






#endif

