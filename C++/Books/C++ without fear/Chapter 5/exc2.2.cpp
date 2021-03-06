#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

#define VALUES 20

int rand_0toN1(int n);

int hits[VALUES];

int main()
{
	int n, i, r;
	while (1)
	{
		srand((unsigned int)time(NULL));
		cout << "Enter number of trials to run and press ENTER: ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (i = 1;i <= n;i++)
		{
			r = rand_0toN1(VALUES);
			hits[r]++;
		}
		for (i = 0; i < VALUES;i++)
		{
			cout << i << ": " << hits[i] << " Accuracy: ";
			cout << static_cast<double>(hits[i]) / (n / VALUES) << endl;
		}
		for (i = 0; i < VALUES;i++)
		{
			hits[i] = 0;
		}
	}
	return 0;
}

int rand_0toN1(int n)
{
	return rand() % n;
}