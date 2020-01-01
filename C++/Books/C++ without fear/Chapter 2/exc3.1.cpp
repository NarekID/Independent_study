#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	if (n>=0 && n<=100)
	{
		cout << "Your number in range from 0 to 100";
	}
	else
	{
		cout << "Your nummber NOT in range from 0 to 100";
	}
	return 0;
}