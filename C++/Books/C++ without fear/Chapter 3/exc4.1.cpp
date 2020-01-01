// prime1 optimized
#include <pch.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, i = 2, is_prime = true; //Stugvox tivy, Cikli popoxakan, (Boolean, entadrenq tivy parz e michev apacucenq hakaraky)
	double q; //qarakusi armat n-ic
	//Tvi mutqagrum
	cout << "Enter number and press ENTER: ";
	cin >> n;
	q = sqrt(static_cast<double>(n)); //qarakusi armati (n-ic) hashvark
	while (i <= q)
	{
		if (n % i == 0)
		{
			is_prime = false;
			cout << "Number is NOT prime.";
			break;
		}
		i++;
	}
	if (is_prime)
	{
		cout << "Number is prime.";
	}
	return 0;
}