#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();
int select_next_available(int n);

string suits[4] = { "hears", "dimonds", "spades", "club" };
string ranks[13] = { "ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" "jack", "queen", "king" };

int card_drawn[52];
int cards_remaining = 52;


int main()
{
	int i, n;
	srand((unsigned int)time(NULL));
	while (1)
	{
		cout << "Enter no. of cards to draw (0 to exit): ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (i = 1; i <= n; i++)
		{
			draw_a_card();
		}
	}
	return 0;
}
void draw_a_card()
{
	int i,r, s, card, n;
	if (cards_remaining == 0) 
	{
		cout << " < Reshuffling > " << endl;
		cards_remaining = 52;
		for (i = 0; i < 52; i++)
		{
			card_drawn[i] = false;
		}
	}
	n = rand_0toN1(cards_remaining--);
	card = select_next_available(n);
	r = card % 13;
	s = card / 13;
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
	card_drawn[i] = false;
	return i;
}

int rand_0toN1(int n)
{
	return rand() % n;
}