// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       Gate_Project.ino
    Created:	Tue 28 Aug 2018 3:52:09 PM
    Author:     COHDA\kmunir
*/

//#includes
#include "gateControl.h"
#include "distanceSensor.h"
#include "led.h"
#include "openSensor.h"

//pin assignments - Outputs
#define SLIDING_GATE_CONTROL_PIN 99
#define RGB_LED_East 99
#define RGB_LED_South 99
#define BUZZER 99

//pin assignments - Inputs
#define SWING_GATE_East_PIN 99
#define SWING_GATE_South_PIN 99
#define SLIDING_GATE_ULTRASONIC_SENSOR_PIN 99

// The setup() function runs once each time the micro-controller starts

void setup()
{
	//setup sliding gate
	gateControl slidingGate(SLIDING_GATE_CONTROL_PIN);
	distanceSensor slidingGateDistanceSensor(SLIDING_GATE_ULTRASONIC_SENSOR_PIN);

}

// Add the main program code into the continuous loop() function
void loop()
{


}
