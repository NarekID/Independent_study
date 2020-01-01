#include "pch.h"
#include <iostream>
using namespace std;

void zero_out_array(int *arr, int n);
int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

int main()
{
	int *p;
	zero_out_array(a, 10);
	for (p=a; p < a + 10;p++) //p = e massivi 1in elementi hascein, qani der p poqr e 1in el. hascein+10
	{
		cout << *p << " ";
	}
	return 0;
}

void zero_out_array(int *p, int n)
{
	while (n-- > 0)
	{
		*p = 0;
		p++;
	}
}