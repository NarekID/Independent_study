#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i, n;
	//Mutqagrel n
	cout << "Enter a number and press ENTER: ";
	cin >> i;
	n = 1;
	while (i >= n)
	{
		cout << i << " "; //Tpel i, i-ic hanel 1 ev tpel
		i = i - 1;			//qani dir i mec kam havasar e n-ic
	}
	return 0;
}
