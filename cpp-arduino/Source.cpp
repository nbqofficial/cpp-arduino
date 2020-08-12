#include "arduino.h"

int main()
{
	arduino duino("Arduino Leonardo"); // connects to the arduino
	char hi[] = "hello world"; 
	duino.send_data(hi, sizeof(hi)); // sends "hello world" over serial
	getchar();
	return 0;
}