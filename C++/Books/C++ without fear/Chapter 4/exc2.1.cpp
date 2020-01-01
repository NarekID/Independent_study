#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int prime(int n); //funkcia haytararum

int main()
{
	int i;
	while (1) //anverj cikl, kdatarvi ete mutqagrel 0, hakarak depqum stugum e mutqagrac tivy parz e te voch
	{
		cout << "Enter a number (0 to exit) ";
		cout << "and press ENTER: ";
		cin >> i;
		if (i == 0)
		{
			break;
		}
		if (prime(i))
		{
			cout << i << " is prime" << endl;
		}
		else
		{
			cout << i << " is not prime" << endl;
		}
	}
	return 0;
}

int prime(int n) //funkcia. Bajanum e n-y 2ic michev armat n, ete n parz e veradarcnum e true, ete voch false
{
	int i;
	double q = sqrt(static_cast<double>(n));
	for (i = 2; i <= q;i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}