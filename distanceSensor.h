// distanceSensor.h

#ifndef _DISTANCESENSOR_h
#define _DISTANCESENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

class distanceSensor {
private:
	int m_pinNo = 0;

public:
	distanceSensor(int pinNo) : m_pinNo{ pinNo }
	{}

	bool isOpen();
	bool isClosed();
	bool isOpening();
	bool isClosing();
	bool isHalfOpen();
	int percent_open();

};

#endif

