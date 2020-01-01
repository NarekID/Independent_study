//Объявите указатель на массив типа double и предложите пользователю выбрать его размер.
//Далее напишите четыре функции : первая должна выделить память для массива, вторая — заполнить ячейки данными,
//третья — показать данные на экран, четвертая — освободить занимаемую память.
//Программа должна предлагать пользователю продолжать работу(создавать новые динамические массивы) или выйти из программы.

#include <iostream>

double* arrayAllocation(const int);
void arrayFill(double*, const int);
void printArray(double*, const int);
double* freeMemory(double*);

using namespace std;

int main()
{
	int size;
	
	double *pArr = 0;

	while (true)
	{
		cout << "Enter array length (0 to exit): ";
		cin >> size;

		pArr = arrayAllocation(size);
		arrayFill(pArr, size);
		printArray(pArr, size);
		pArr = freeMemory(pArr);
		if (size == 0)
		{
			break;
		}
	}	



	return 0;
}

double* arrayAllocation(const int size)
{
	double *pArr = new double[size];
	return pArr;
}

void arrayFill(double *pArr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		*(pArr + i)= (double)(rand() % 101)/10;
	}
}

void printArray(double *pArr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(pArr + i) << " ";
	}
	cout << endl;
}

double* freeMemory(double *pArr)
{
	delete[] pArr;
	pArr = 0;
	return pArr;
}



