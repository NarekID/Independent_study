#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int prime(int n); //funkcia haytararum

int main()
{
	int i=2;
	cout << "Prime numbers from 2 to 20 are:" << endl;
	for (i;i <= 20;i++)
	{
		if (prime(i))
		{
			cout << i << endl;
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