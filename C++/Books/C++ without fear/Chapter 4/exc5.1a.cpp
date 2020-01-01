#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);

int main()
{
	int n,i;
	while (1)
	{
		cout << "Enter number of dice to roll (to exit):  ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		srand((unsigned int)time(NULL));
		for (i = 1;i <= n;i++)
		{
			cout <<  rand_0toN1(6) << " ";
		}
		cout << endl;
	}
	return 0;
}

int rand_0toN1(int n)
{
	return (rand() % n) + 1;

}