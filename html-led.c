#include <wiringPi.h>

#define RED 0;
#define GREEN 1;
#define BLUE 2;


int main(void) {

	// Initiate WiringPi
	wiringPiSetup();

	// Initiate GPIO pins
	pinMode(RED, OUTPUT);
	pinMode(GREEN, OUTPUT);
	pinMode(BLUE, OUTPUT);

	// Set pins
	digitalWrite(RED, LOW);
	digitalWrite(GREEN, LOW);
	digitalWrite(BLUE, HIGH);

	return 0;

}