#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	const int COLS = 7;
	const int ROWS = 7;

	int Arr[7][7];
	int temp = 0;
	int imin=0, imax=0;
	int check;

	cout << "Original Array:" << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10;
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}

	

	/*for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}*/

	int *min, *max;

	for (int j = 0; j < COLS; j++)
	{

		min = &Arr[0][j];
		max = &Arr[0][j];


		for (int i = 0; i < ROWS; i++)
		{
			if (*min > Arr[i][j])
			{
				min = &Arr[i][j];
				imin = i;
			}
			else if (*max < Arr[i][j])
			{
				max = &Arr[i][j];
				imax = i;
			}
		}
		if (min > max)
		{
			check = min - max;
			for (int c = 0; c < check; c++)
			{
				for (int i = imax + 1; i < imin; i++)
				{
					if (Arr[i][j] < Arr[i + 1][j])
					{
						temp = Arr[i][j];
						Arr[i][j] = Arr[i + 1][j];
						Arr[i + 1][j] = temp;
					}
				}
			}
			
		}
		else if (max > min)
		{
			check = max - min;
			for (int c = 0; c < check; c++)
			{
				for (int i = imin + 1; i < imax; i++)
				{
					if (Arr[i][j] > Arr[i + 1][j])
					{
						temp = Arr[i][j];
						Arr[i][j] = Arr[i + 1][j];
						Arr[i + 1][j] = temp;
					}
				}
			}
			
		}
	}

	cout << endl << "Sorted Array:" << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}


	return 0;
}