#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);
void choice();

const char *color[4] = { "red", "orange", "green", "blue" };
const char *shape[2]= { "cube", "ball" };

int main()
{
	int i, n;
	srand((unsigned int)time(NULL));
	while (1)
	{
		cout << "Enter a numner and press ENTER (0 to quit): ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (i=1;i <= n;i++)
		{
			choice();
		}
	}
	return 0;
}

void choice()
{
	int c, s;
	c=rand_0toN1(4);
	s=rand_0toN1(2);
	cout << color[c] << " " << shape[s] << endl;
}

int rand_0toN1(int n)
{
	return rand() % n;
}