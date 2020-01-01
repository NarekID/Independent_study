#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);

int main()
{
	int n;
	while (1)
	{
		cout << "Enter a number (0 to exit) and press ENTER: ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		srand((unsigned int)time(NULL));
		cout << "random number: " << rand_0toN1(n) << endl;
	}
	return 0;
}

int rand_0toN1(int n)
{
	return (rand()%n)+1;

}