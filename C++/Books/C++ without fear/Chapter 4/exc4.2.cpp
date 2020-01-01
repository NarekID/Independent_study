#include "pch.h"
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
	int n;
	while (1)
	{
		cout << "Enter a number (0 to exit) and press ENTER: ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		cout << factorial(n) << endl;
	}
	return 0;
}

int factorial(int n)
{
	int fact = 1;
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}