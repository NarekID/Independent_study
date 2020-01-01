#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i, n;
	//Mutqagrel n
	cout << "Enter a number and press ENTER: ";
	cin >> n;
	i = 1;
	while (i <= n)
	{
		cout << i << " "; //Tpel i, i-in gumarel 1 ev tpel
		i = i + 1;			//qani dir i poqr kam havasar e n-ic
	}
	return 0;
}
