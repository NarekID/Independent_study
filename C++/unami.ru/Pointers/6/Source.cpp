//Объявите указатель на массив типа int и выделите память память для 12-ти элементов.
//Необходимо написать функцию, которая поменяет значения четных и нечетных ячеек массива.
#include <iostream>
#include <ctime>

using namespace std;

#define SIZE 12

void changeArray(int*);


int main()
{
	setlocale(LC_ALL, "rus");
	srand((unsigned int)time(NULL));

	int arr[SIZE];
	
	int *pArr = arr;

	for (int i = 0; i < SIZE; i++)
	{
		*(pArr + i) = rand() % 21;
	}

	cout << "Original array" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArr + i) << " ";
	}
	cout << endl << endl;

	changeArray(pArr);

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArr + i) << " ";
	}
	cout << endl;


	return 0;
}

void changeArray(int *pArr)
{
	int temp;
	for (int i = 0; i < SIZE-1; i++)
	{
		if (i % 2 == 0)
		{
			temp = *(pArr + i);
			*(pArr + i) = *(pArr + (i + 1));
			*(pArr + (i + 1)) = temp;
		}
	}
}