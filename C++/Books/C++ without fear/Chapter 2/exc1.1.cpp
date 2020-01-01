#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	//Stanal tiv
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	//Stugel tivy bajanarar e 7 te voch
	if (n % 7 == 0)
	{
		cout << "Your number divisible by 7.";
	}
	else
	{
		cout << "Your number NOT divisible by 7.";
	}
	return 0;
}