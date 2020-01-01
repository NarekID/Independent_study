#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	int n, remainder;
	//Mutqagrel tiv
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	//Stanal mnacordy
	remainder = n % 2;
	//Stuger tivy zuyg e (ete remainder havasar e 0) te kent (remainder = 0)
	if (remainder == 0)
	{
		cout << "The number is even.";
	}
	else
	{
		cout << "The number is odd.";
	}
	return 0;
}