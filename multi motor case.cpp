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
	int sensorin = 
	wiringPiSetup();
	pinMode(1, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);


	for (int counter = 0; counter<20; counter++)
	{
		
		switch (sensorin)
		{
		case 1:
			digitalWrite(1, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(1, 0);
			cout << "off" << endl;
			delay(100);
			break;

		case 2: 
			digitalWrite(2, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(2, 0);
			cout << "off" << endl;
			delay(100);
			break;

		case 3: 
			digitalWrite(3, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(2, 0);
			cout << "off" << endl;
			delay(100);
			break;
		}
		int state;
		state = 1 * sensorin1 + 2 * sensorin2 + 4 * sensorin3;
		//Motor 1
		if (sensorin1 == 1)
		{
			digitalWrite(1, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(1, 0);
			cout << "off" << endl;
			delay(100);
		}
		else if ()
		{

		}

		//Motor 2
		if (state == 2 or state == 3 or state == 6 or state == 7)
		{
			digitalWrite(2, 1);
			cout << "on" << endl;
			delay(100)

				digitalWrite(2, 0);
			cout << "off" << endl;
			delay(100);
		}
		//Motor 3
		if (state == 4 or state == 5 or state == 6 or state == 7)
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

