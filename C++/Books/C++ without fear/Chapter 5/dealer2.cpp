#include "pch.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();

const char *suits[4] = { "hearts", "diamonds", "spades","club" };
const char *ranks[13] = { "ace","two","three","four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king" };

int main()
{
	int n, i;
	srand((unsigned int)time(NULL));
	while (1)
	{
		cout << "Enter no. of cards to draw (0 to quit): ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (i = 1;i <= n;i++)
		{
			draw_a_card();
		}
	}
	return 0;
}

void draw_a_card()
{
	int r, s, card;
	card = rand_0toN1(52);
	r = card % 13; //patahakan tiv 0-12
	s = card / 13; //patahakan tiv 0-3
	cout << ranks[r] << " of " << suits[s] << endl;
}

int rand_0toN1(int n)
{
	return rand() % n;
}