
#include "cmorse"
#include <stdio.h>
#include <cstring>

int main() {
	setgpiopin(1); // Set the GPIO pin to GPIO_GEN1.
	makecommands(); 
	char str[25]; 
	printf(" Enter message : ");
	gets(str);	//Input string
	blinkstring(str); //Function call for output in morsecode.
	
	return 0;
}
