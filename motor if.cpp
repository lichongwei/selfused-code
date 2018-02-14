// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <wiringPi.h>
#include <iostream>

using namespace std;

int main()
{
	int sensorin1;
	int sensorin2;
	int sensorin3;
	wiringPiSetup();
	pinMode(1, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	for (int counter = 0; counter<20; counter++)
	{


		int state;
		state = 1 * sensorin1 + 2 * sensorin2 + 4 * sensorin3;
		//Motor 1
		if (sensorin1 ==1)
		{
			digitalWrite(1, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(1, 0);
			cout << "off" << endl;
			delay(100);
		}
		else
		{
			digitalWrite(1, 0);
			cout << "on" << endl;
			delay(200)
		}

		//Motor 2
		if (sensorin2 == 1)
		{
			digitalWrite(2, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(2, 0);
			cout << "off" << endl;
			delay(100);
		}
		//Motor 3
		if (sensorin3 == 1)
		{
			digitalWrite(3, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(3, 0);
			cout << "off" << endl;
			delay(100);
		}



	}

	return 0;

}

