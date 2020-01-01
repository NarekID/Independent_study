//Написать программу, создающую массив из 10 случайных целых чисел из отрезка [-50;50].
//Вывести на экран весь массив и на отдельной строке — значение минимального элемента массива.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int arr[10];
	int *pArr = arr;
	int min;

	for (int i = 0; i < 9; i++)
	{
		*(pArr + i) = rand() % 101 - 50;
	}

	min = *pArr;

	for (int i = 0; i < 9; i++)
	{
		
		if (min > *(pArr + i))
		{
			min = *(pArr + i);
		}
		cout << *(pArr + i) << " ";
	}
	cout << endl;

	cout << "Min = " << min << endl;

	return 0;
}