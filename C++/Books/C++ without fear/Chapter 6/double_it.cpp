// double_it.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void double_it(int *p);

int main()
{
	int a = 5, b = 6;
	cout << "Value of a befor doubling is " << a << endl;
	cout << "Value of a befor doubling is " << b << endl;
	double_it(&a);
	double_it(&b);
	cout << "Value of a after doubling is " << a << endl;
	cout << "Value of b after doubling is " << b << endl;
	return 0;
}

void double_it(int *p)
{
	*p *= 2;
}