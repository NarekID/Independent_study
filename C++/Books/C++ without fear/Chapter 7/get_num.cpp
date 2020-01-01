#include "pch.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

double get_number();

int main()
{
	double x;
	for (;;)
	{
		cout << "Enter a number (press ENTER to exit): ";
		x = get_number();
		if (x == 0.0)
		{
			break;
		}
		cout << "The square root of x is: " << sqrt(x);
		cout << endl;

	}
	return 0;
}

double get_number()
{
	char s[100];
	cin.getline(s, 99);
	if (strlen(s) == 0)
	{
		return 0.0;
	}
	return atof(s);
}

