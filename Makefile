run: html-led.c
	sudo gcc -o leds html-led.c -lwiringPi -lpthread -Wall
	./leds