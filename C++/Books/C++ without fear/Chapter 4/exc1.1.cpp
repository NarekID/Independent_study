#include <pch.h>
#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
	int n;
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	cout << "Factorial of " << n << " is " << factorial(n);
	return 0;
}

int factorial(int n)
{
	int i = 2, f = 1;
	for (i; i <= n; i++)
	{
		f *= i;
	}
	return f;
}