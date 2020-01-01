#include <iostream>

using namespace std;

void enterMatrix(int** const pArr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Array[" << i << "][" << j << "] = ";
			cin >> pArr[i][j];
		}
	}
}

void printMatrix(int** const pArr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << pArr[i][j] << "\t";
		}
		cout << endl;
	}
}

void sumMatrix(int** const pArr1, int** const pArr2, int** pArr3, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			pArr3[i][j] = pArr1[i][j] + pArr2[i][j];
			cout << pArr3[i][j] << "\t";
		}
		cout << endl;
	}
}

void multMatrix(int** const pArr1, int** const pArr2, int** pArr3, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			pArr3[i][j] = pArr1[i][j] * pArr2[i][j];
			cout << pArr3[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	int rows, cols;
	int funcNumber;
	bool isFunc1 = false;

	cout << "\tВведение двух матриц" << endl;

	cout << "Введите количество строк матриц: ";
	cin >> rows;
	cout << "Введите количество столбцов матриц: ";
	cin >> cols;

	int **pArr1 = new int*[rows];
	int **pArr2 = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		pArr1[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		pArr2[i] = new int[cols];
	}

	cout << endl << "\tПервая матрица" << endl;
	enterMatrix(pArr1, rows, cols);
	cout << endl << "\tВторая матрица" << endl;
	enterMatrix(pArr2, rows, cols);

	cout << "Две матрицы введены." << endl;
	while (1)
	{
		cout << endl << "\tВыберите функцию:" << endl;
		cout << "0. Выйти из программы" << endl;
		cout << "1. Печать матриц" << endl;
		cout << "2. Суммирование двух матриц" << endl;
		cout << "3. Умножение двух матриц" << endl;
		cin >> funcNumber;

		switch (funcNumber)
		{
			case 1:
			{
				cout << endl << "\tПервая матрица" << endl;
				printMatrix(pArr1, rows, cols);
				cout << endl << "\tВторая матрица" << endl;
				printMatrix(pArr2, rows, cols);
				break;
			}
			case 2:
			{
				int **pArr3 = new int*[rows];
				for (int i = 0; i < rows; i++)
				{
					pArr3[i] = new int[cols];
				}
				cout << endl << "\tСуммирование двух матриц:" << endl;
				sumMatrix(pArr1, pArr2, pArr3, rows, cols);


				for (int i = 0; i < rows; i++)
				{
					delete[] pArr3[i];
				}
				delete[] pArr3;

				break;
			}
			case 3:
			{
				int **pArr3 = new int*[rows];
				for (int i = 0; i < rows; i++)
				{
					pArr3[i] = new int[cols];
				}

				cout << endl << "\tУмножение двух матриц:" << endl;

				multMatrix(pArr1, pArr2, pArr3, rows, cols);

				for (int i = 0; i < rows; i++)
				{
					delete[] pArr3[i];
				}
				delete[] pArr3;

				break;
			}
			default:
			{

			}
		}
	}
	
	
	for (int i = 0; i < rows; i++)
	{
		delete[] pArr1[i];
		delete[] pArr2[i];
	}
	delete[] pArr1;
	delete[] pArr2;

	pArr1 = nullptr;
	pArr2 = nullptr;

	return 0;
}