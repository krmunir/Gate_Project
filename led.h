// led.h

#ifndef _LED_h
#define _LED_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

enum Colour {
	RED,
	GREEN,
	BLUE
};

enum BlinkRate {
	FAST,
	SLOW
};

class led {
private:
	int m_outputPin1 = 0;
	int m_outputPin2 = 0;
	int m_outputPin3 = 0;

public:
	led(int outputPin1, int outputPin2, int outputPin3) :m_outputPin1{ outputPin1 }, m_outputPin2{ outputPin2 }, m_outputPin3{ outputPin3 }
	{}

	void turnOn(Colour col);
	void turnOff();
	void blink(Colour col, BlinkRate rate);
	void blink(Colour col1, Colour col2, BlinkRate rate);



};




#endif

