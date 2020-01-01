#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cout << "Enter first number and press ENTER: ";
	cin >> n1;
	cout << "Enter second number and press ENTER: ";
	cin >> n2;
	while (n1 <= n2)
	{
		cout << n1 << " ";
		n1 = n1 + 1;
	}
	return 0;
}