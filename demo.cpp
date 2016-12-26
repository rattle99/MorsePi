
#include "cmorse"
#include <cstdio>
#include <cstring>
#include <iostream>

int main() {
	setgpiopin(1); // Set the GPIO pin to GPIO_GEN1.
	makecommands(); 
	char str[50]; 
	printf(" Enter message : ");
	std::cin.getline(str,50);	//Input string
	blinkstring(str); //Function call for output in morsecode.
	
	return 0;
}
