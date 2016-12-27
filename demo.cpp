
#include "cmorse"	// Required header for morsecode
#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	setgpiopin(1); // Set the GPIO pin to GPIO_GEN1.
	makecommands(); 
	char str[100]; 
	printf(" Enter message : ");
	ofstream fout;
	fout.open("Message-log.txt",ios::app);
	cin.getline(str,99);	//Input string
	fout<<str<<endl;
	blinkstring(str); //Function call for output in morsecode.
	string data;
	ifstream fin; 
	fin.open("Message-log.txt");
	while(!fin.eof())
	{
		fin>>data; 
		cout<<data<<endl;
	}
	fin.close();
	return 0;
}
