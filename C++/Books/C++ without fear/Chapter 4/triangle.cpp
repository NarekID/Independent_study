#include <pch.h>
#include <iostream>
using namespace std;

int triangle(int num); // funcia haytararum

int main()
{
	int n;
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	cout << "Function returned: " << triangle(n);
	return 0;
}

int triangle(int num) //funcia
{
	int i;
	int sum = 0;
	for (i = 1; i <= num;i++)
	{
		sum +=i; //<< .nuyn e >> sum = sum + i;
	}
	return sum;
}