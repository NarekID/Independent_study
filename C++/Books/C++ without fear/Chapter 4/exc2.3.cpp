#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int prime(int n); //funkcia haytararum

int main()
{
	int i = 1000000000;
	//cout << "First prime number after 1 billion is: ";
	for (i; ;i++)
	{
		if (prime(i))
		{
			cout << i << endl;
			break;
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