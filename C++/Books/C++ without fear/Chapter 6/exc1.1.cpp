// exc1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void triple(int *n);

int main()
{
	int n=15;
	cout << "Triple of number " << n;
	triple(&n);
	cout << " = " << n << endl;
}

void triple(int *n)
{
	*n*=3;
}
