#include "pch.h"
#include <iostream>
using namespace std;

void triple(int *n);

int main()
{
	int n;
	while (1)
	{
		cout << "Enter a number and press ENTER (0 to quit): ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		cout << "Triple of number " << n << " = ";
		triple(&n);
		cout << n <<  endl;
	}
	return 0;
}

void triple(int *n)
{
	*n *= 3;
}
