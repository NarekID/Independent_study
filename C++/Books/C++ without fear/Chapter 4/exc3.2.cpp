#include "pch.h"
#include <iostream>
using namespace std;

int gcf(int a, int b);

int main()
{
	int a = 0, b = 0;
	while (1)
	{
		cout << "Enter a number (0 to quit): ";
		cin >> a;
		if (a == 0)
		{
			break;
		}
		cout << "Enter 2nd number: ";
		cin >> b;
		cout << "GCF = " << gcf(a, b) << endl;
	}
	return 0;
}

int gcf(int a, int b)
{
	int c = a % b;
	if (c == 0)
	{
		return b;
	}
	return gcf(b, c);
}