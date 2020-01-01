#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cout << "Enter first number: ";
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	for (n1; n1 <= n2; n1++)
	{
		cout << n1 << " ";
	}
	return 0;
}