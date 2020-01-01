// exc1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0, sum = 0;
	int a[7] = {};
	for (i;i < 7;i++)
	{
		cout << "Enter a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
	for (i=0;i < 7;i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
		sum += a[i];
	}
	cout << endl << "SUM = " << sum << endl;
	return 0;
}