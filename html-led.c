#include <wiringPi.h>

const int RED = 0;
const int GREEN = 1;
const int BLUE = 2;


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