#include "pch.h"
#include <iostream>
using namespace std;

void print_out(int n);

int main()
{
	int a;
	cout << "Enter a number and press ENTER: ";
	cin >> a;
	print_out(a);
	return 0;
}

void print_out(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
}