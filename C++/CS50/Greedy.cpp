#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "O hai! How much change is owed? ";
	double changeDouble;
	cin >> changeDouble;

	while (changeDouble <= 0)
	{
		cout << "How much change is owed? ";
		cin >> changeDouble;
	}

	int change = changeDouble * 100;
	
	int quarter = change / 25;
	change %= 25;

	int  dime = change / 10;
	change %= 10;

	int nickel = change / 5;

	int penny = change % 5;

	cout << quarter + dime + nickel + penny << " coins" << endl;
}