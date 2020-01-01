#include "pch.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();
int select_next_available(int n);

const char *suits[4] = { "hearts", "diamonds", "spades","club" };
const char *ranks[13] = { "ace","two","three","four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king" };

int card_drawn[52];
int cards_remaining = 52;

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
	int r, s, card,n;
	if (cards_remaining == 0)
	{
		cout << " < Reshuffling > " << endl;
		cards_remaining = 52;
		for (int i = 0;i < 52;i++)
		{
			card_drawn[i] = false;
		}
	}
	n = rand_0toN1(cards_remaining--);
	card = select_next_available(n);
	r = card % 13; //patahakan tiv 0-12
	s = card / 13; //patahakan tiv 0-3
	cout << ranks[r] << " of " << suits[s] << endl;
}

int select_next_available(int n)
{
	int i = -1;
	n++;
	while (n-- > 0)
	{
		i++;
		while (card_drawn[i])
		{
			i++;
		}
	}
	card_drawn[i] = true;
	return i;
}

int rand_0toN1(int n)
{
	return rand() % n;
}