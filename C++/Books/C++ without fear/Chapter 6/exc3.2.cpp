#include "pch.h"
#include <iostream>
using namespace std;

void copy_array(int *p1, int *p2, int n);

int a[10];
int b[10] = { 5,9,7,5,3,4,5,8,9,1 };

int main()
{
	int *p;	
	copy_array(a, b, 10);
	for (p=a; p<a+10;p++)
	{
		cout << *p << " ";
	}
	cout << endl;
	return 0;
}

void copy_array(int *p1, int *p2, int n)
{
	while (n-- > 0)
	{
		*p1 = *p2; //     *(p1++) = *(p2++);
		p1++;		// or *p1++ = *p2++
		p2++;
	}
}