
/* Morse code C header file for Raspberry Pi to use with LEDs.
system() function used for setting GPIO_GEN pin and blinking led.
One unit is 0.5 seconds, so a dot equals 0.5 seconds and a dash equals 1.5 seconds (3u).
A pause is 1 second long and a space rapid 10 blinks.
*/


#include <stdio.h>
#include <cstring>
#include <unistd.h>
#include <cstdlib>


int pin;

int setgpiopin (int pinnum){
    char setpin[50];
	sprintf(setpin, "gpio mode %d out", pinnum);
    system(setpin);
    pin = pinnum;
    return 0;
}

char ledon[40];
char ledoff[40];

int makecommands() {
	sprintf(ledon, "gpio write %d 1", pin);
    sprintf(ledoff, "gpio write %d 0", pin);
    return 0;
}

int blinkt(float time) {
	system(ledon);
	sleep(time);
	system(ledoff);
    return 0;
}

int blinkdot() {
	system(ledon);
	sleep(0.5);
	system(ledoff);
	sleep(1);
	return 0;
}

int blinkdash() {
	system(ledon);
	sleep(1.5);
	system(ledoff);
	sleep(1);
	return 0;
}

int blink1() {
	blinkdot();
	blinkdash();
	blinkdash();
	blinkdash();        
	sleep(1.5);
	return 0;
}

int blink2() {
	blinkdot();
    blinkdot();
	blinkdash();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blink3() {
	blinkdot();
	blinkdot();
	blinkdot();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blink4() {
	blinkdot();
	blinkdot();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blink5() {
	int c = 0;
	while (c != 5) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blink6() {
	blinkdash();
	int c = 0;
	while (c != 4) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blink7() {
	blinkdash();
	blinkdash();
	int c = 0;
	while (c != 3) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blink8() {
	blinkdash();
	blinkdash();
	blinkdash();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blink9() {
	int c = 0;
	while (c != 4) {
		blinkdash();
		c++;
	}
	blinkdot();
	sleep(1.5);
	return 0;
}

int blink0() {
	int c = 0;
	while (c != 5) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkperiod() {
	blinkdot();
	blinkdash();
	blinkdot();
	blinkdash();
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkA() {
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkB() {
	blinkdash();
	int c = 0;
	while(c != 3) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkC() {
	blinkdash();
	blinkdot();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkD() {
	blinkdash();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkE() {
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkF() {
	blinkdot();
	blinkdot();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkG() {
	blinkdash();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkH() {
	int c = 0;
	while (c != 4) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkI() {
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkJ() {
	blinkdot();
	int c = 0;
	while (c != 3) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkK() {
	blinkdash();
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkL(){
	blinkdot();
	blinkdash();
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkM() {
	int c = 0;
	while (c != 2) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkN() {
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkO() {
	int c = 0;
	while (c != 3) {
		blinkdash();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkP() {
	blinkdot();
	blinkdash();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkQ() {
	int c = 0;
	while (c != 2) {
		blinkdash();
		c++;
	}
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkR() {
	blinkdot();
	blinkdash();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkS() {
	int c = 0;
	while (c != 3) {
		blinkdot();
		c++;
	}
	sleep(1.5);
	return 0;
}

int blinkT() {
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkU() {
	int c = 0;
	while (c != 2) {
		blinkdot();
		c++;
	}
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkV() {
	int c = 0;
	while (c != 3) {
		blinkdot();
		c++;
	}
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkW() {
	blinkdot();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkX() {
	blinkdash();
	blinkdot();
	blinkdot();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkY() {
	blinkdash();
	blinkdot();
	blinkdash();
	blinkdash();
	sleep(1.5);
	return 0;
}

int blinkZ() {
	int c = 0;
	while (c != 2) {
		blinkdash();
		c++;
	}
	blinkdot();
	blinkdot();
	sleep(1.5);
	return 0;
}

int blinkspace() {
        int m=10;
        while(m--)
        {
                blinkt(0.1);
        }
	sleep(1.5);
        return 0;
}

int blinkstring(char * string) { 				// Blink a character array (string)
	int length = strlen(string);				// in morse code.
	int count = 0;	
	while (count < length) 
	{
		switch(string[count])
		{
			case 'a':
			case 'A': blinkA();
				  break;

			case 'b':
			case 'B': blinkB();
				  break;

			case 'c':
			case 'C': blinkC();
				  break;

			case 'd': 
			case 'D': blinkD();
				  break;
		
			case 'e':
			case 'E': blinkE();
			 	  break;
			case 'f':
			case 'F': blinkF();
				  break;

			case 'g':
			case 'G': blinkG();
				  break;

			case 'h':
			case 'H': blinkH();
				  break;

			case 'i':
			case 'I': blinkI();
				  break;

			case 'j':
			case 'J': blinkJ();
				  break;

			case 'k':
			case 'K': blinkK();
				  break;

			case 'l':
			case 'L': blinkL();
				  break;

			case 'm':
			case 'M': blinkM();
				  break;

			case 'n':
			case 'N': blinkN();
				  break;

			case 'o':
			case 'O': blinkO();
				  break;

			case 'p':
			case 'P': blinkP();
				  break;

			case 'q':
			case 'Q': blinkQ();
				  break;

			case 'r':
			case 'R': blinkR();
				  break;

			case 's':
			case 'S': blinkS();
				  break;

			case 't':
			case 'T': blinkT();
				  break;

			case 'u':
			case 'U': blinkU();
				  break;

			case 'v':
			case 'V': blinkV();
				  break;

			case 'w':
			case 'W': blinkW();
				  break;

			case 'x':
			case 'X': blinkX();
				  break;

			case 'y':
			case 'Y': blinkY();
				  break;

			case 'z':
			case 'Z': blinkZ();
				  break;

			case '.': blinkperiod();
				  break;

			case ' ': blinkspace();
				  break;

			case '1': blink1();
				  break;

			case '2': blink2();
				  break;

			case '3': blink3();
				  break;

			case '4': blink4();
				  break;

			case '5': blink5();
				  break;

			case '6': blink6();
				  break;

			case '7': blink7();
				  break;

			case '8': blink8();
				  break;

			case '9': blink9();
				  break;

			case '0': blink0();
				  break;
		}
		count++;
	}
	return 0;
}


