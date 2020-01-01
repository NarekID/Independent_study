#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		cout << "Enter height (0 - 23): ";
		int h;
		cin >> h;

		int k = 1;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j <= h; j++)
			{
				if (j < h - k)
				{
					cout << " ";
				}
				else
				{
					cout << "#";
				}
			}
			k++;
			cout << endl;
		}
	}

	return 0;
}

