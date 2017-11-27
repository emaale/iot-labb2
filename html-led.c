#include <wiringPi.h>

int main(void) {

	// Initiate WiringPi
	wiringPiSetup();

	// Initiate GPIO pins
	pinMode(0, OUTPUT);
	pinMode(1, OUTPUT);
	pinMode(2, OUTPUT);

	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	digitalWrite(2, HIGH);

	return 0;

}