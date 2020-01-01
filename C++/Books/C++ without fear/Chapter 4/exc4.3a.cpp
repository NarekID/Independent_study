#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

void get_all_divisors(int n);
int get_lowest_divisor(int n);

int main()
{
	int n;
	while (1)
	{
		cout << "Enter a number (0 to exit) and press ENTER: ";
		cin >> n;
		get_all_divisors(n);
		if (n == 0)
		{
			break;
		}
		cout << endl;
	}
	return 0;
}

void get_all_divisors(int n)
{
	int i;
	while (1)
	{
		i = get_lowest_divisor(n);
		cout << i;
		if (n == i)
		{
			break;
		}
		n /= i;
		cout << ", ";
	}
}

int get_lowest_divisor(int n)
{
	int i;
	double sqrt_of_n = sqrt((double)n);
	for (i = 2;i <= sqrt_of_n;i++)
	{
		if (n % i == 0)
		{
			return i;
		}
	}
	return n;
}