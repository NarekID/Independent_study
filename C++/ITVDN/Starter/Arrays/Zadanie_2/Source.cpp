#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int *pArr1 = new int[1];
	int *pArr2;
	int num = 0;
	int size = 0;

	while (num >= 0)
	{
		cout << "Введите целое число: ";
		cin >> num;

		if (num < 0)
		{
			for (int i = 0; i < size; i++)
			{
				cout << *(pArr1 + i) << " ";
			}
			cout << endl;
			break;
		}

		if (size == 0)
		{
			pArr1[size] = num;
			cout << *pArr1 << endl;
			size++;
		}
		else
		{
			pArr2 = new int[size+ 1];
			for (int i = 0; i < size; i++)
			{
				*(pArr2 + i) = *(pArr1 + i);
			}
			pArr2[size] = num;
			delete[] pArr1;
			pArr1 = new int[size + 1];
			for (int i = 0; i < size+1; i++)
			{
				*(pArr1 + i) = *(pArr2 + i);
				cout << *(pArr1 + i) << " ";
			}
			cout << endl;
			delete[] pArr2;
			size++;
		}
	}
	delete[] pArr1;
	
	return 0;
}