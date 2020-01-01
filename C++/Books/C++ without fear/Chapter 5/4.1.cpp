#include "pch.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void choice();

const char *color[4] = { "blue","orange","red","green" };
const char *shape[2] = { "cube","circle" };

int main()
{
	int i, n;
	srand((unsigned)time(NULL));
	while (1)
	{
		cout << "Enter a number and press ENTER (0 to quit): ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (i = 1;i <= n;i++)
		{
			choice();
		}
	}
	return 0;
}

void choice()
{
	int c, s, object;
	object = rand_0toN1(8);
	c = object % 4;
	s = object / 4;
	cout << color[c] << " " << shape[s] << endl;
}

int rand_0toN1(int n)
{
	return rand() % n;
}