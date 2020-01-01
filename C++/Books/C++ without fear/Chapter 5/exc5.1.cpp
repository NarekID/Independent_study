#include "pch.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void choice();
int select_next_available(int n);

const char *colors[4] = { "blue", "orange", "red", "blue" };
const char *shapes[2] = { "circle", "cube" };

int item_remaining = 8;
int item_drawn[8];

int main()
{
	int i, n;
	srand((unsigned int)time(NULL));
	while (1)
	{
		cout << "Enter no. of items (0 to quit) and press ENTER: ";
		cin >> n;
		if (n==0)
		{
			break;
		}
		for (i = 0;i < n;i++)
		{
			choice();
		}
	}
	return 0;
}

void choice()
{
	int i,c,s,n,item;
	if (item_remaining == 0)
	{
		cout << " < Reshuffling > " << endl;
		item_remaining = 8;
		for (i = 0; i < 52;i++)
		{
			item_drawn[i] = false;
		}
	}
	n = rand_0toN1(item_remaining--);
	item = select_next_available(n);
	c = item % 4;
	s = item / 4;
	cout << colors[c] << " " << shapes[s] << endl;
}

int select_next_available(int n)
{
	int i = 0;
	while (item_drawn[i])
	{
		i++;
	}
	while (n-- > 0)
	{
		i++;
	}
	item_drawn[i] = true;
	return i;
}

int rand_0toN1(int n)
{
	return rand() % n;
}