#include "pch.h"
#include <iostream>
using namespace std;

void convert_temp(double *n);

int main()
{
	double n;
	cout << "Starting Program... WELCOME!" << endl;
	cout << "This program convert Celsius temperature to Fahrenheit!" << endl;
	cout << "Let's do it!" << endl;
	while (1)
	{
		cout << "Enter a Celsius temp. and press ENTER (0 to quit): ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		cout << n << " C of Celsius = ";
		convert_temp(&n);
		cout << n << " of Fahrenheit" << endl;
	}
	return 0;
}

void convert_temp(double *n)
{
	*n = (*n*1.8) + 32;
}
