#include "pch.h"
#include <iostream>
using namespace std;

void sort(double n);
void swap(double *p1, double *p2);

double a[10];

int main()
{
	int i;
	for (i = 0; i < 10;i++)
	{
		cout << "Enter element a[" << i << "] = ";
		cin >> a[i];
	}
	sort(10);
	cout << "Here are all the array elements, sorted from high to low:" << endl;
	for (i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

void sort(double n)
{
	int i, j, high;
	for (i = 0;i < n-1;i++)
	{
		high = i;
		for (j = i + 1;j < n;j++)
		{
			if (a[j] > a[high])
			{
				high = j;
			}
			if (i != high)
			{
				swap(&a[i], &a[j]);
			}
		}
	}
}

void swap(double *p1, double *p2)
{
	double temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}