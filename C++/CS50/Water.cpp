#include "pch.h"
#include <iostream>

using namespace std;

int main()
{	
	cout << "Enter how long do you have shower (in minutes): ";
	int minutes;
	cin >> minutes;

	while (minutes < 0)
	{
		cout << "Wrong! Enter how long do you have shower (in minutes): ";
		cin >> minutes;
	}

	int waterLitre = 6 * minutes;
	
	cout << "bottles: " << 2 * waterLitre << endl;
}