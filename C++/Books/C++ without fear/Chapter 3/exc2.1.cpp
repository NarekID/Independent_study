#include <pch.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	double q;
	bool is_prime = true;
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	q = sqrt((double)n); //sqrt(static_cast<doutble>(n)); sqrt((double)n)
	for (int i = 2; i <= q;i++)
	{
		if (n % 2 == 0)
		{
			is_prime = false;
			cout << "Number is not prime.";
			break;
		}
	}
	if (is_prime)
	{
		cout << "Number is prime.";
	}
	return 0;
}