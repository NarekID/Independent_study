#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);

int main()
{
	int n, i;
	int r;
	srand(time(NULL)); //skzbnakan tiv voric sksum e patahakan tveri generacian
	cout << "Enter number of dice to roll: ";
	cin >> n;
	for (i = 1; i <= n;i++)
	{
		r = rand_0toN1(6) + 1; //qani vor rand_0toN tpum e patahakan tver 0ic- N-1, ayd pacharov avelacnum enq 1 (1ic 6)
		cout << r << " ";
	}
	return 0;
}

int rand_0toN1(int n)
{
	return rand() % n;
}