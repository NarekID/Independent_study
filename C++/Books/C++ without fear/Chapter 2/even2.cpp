#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// Optimized even1
	int n;
	//Mutqagrel tiv
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	//Stuger tivy zuyg e (n%2=0) te kent (n%2=1)
	if (n % 2 == 0)
	{
		cout << "The number is even.";
	}
	else
	{
		cout << "The number is odd.";
	}
	return 0;
}