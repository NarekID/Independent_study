#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Дополнительное задание\n" << endl;
	cout << "\tВариант 1\n" << endl;
	{
		int width, height, i, j;

		cout << "Введите длине: ";
		cin >> width;

		cout << "Введите ширину: ";
		cin >> height;

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;
	}

	cout << "\n\tВариант 2\n" << endl;
	{
		int width, height, i, j;

		cout << "Введите длине: ";
		cin >> width;

		cout << "Введите ширину: ";
		cin >> height;

		cout << endl;

		for (i = 1; i <= height; i++)
		{
			for (j = 1; j <= width; j++)
			{
				if (i == 1 || i == height || j == 1 || j == width)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}

			}
			cout << endl;
		}
		cout << endl;
	}
	

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\nЗадание 2\n" << endl;
	{
		int firstNum, secondNum, sum = 0, i;
		
		cout << "Введите начальное число: ";
		cin >> firstNum;
		cout << endl << "Введите конечное число: ";
		cin >> secondNum;

		while (firstNum > secondNum)
		{
			cout << "Неверно! Второе число больше: ";
			cin >> secondNum;
		}

		cout << endl << "Нечетные числа от " << firstNum << " до " << secondNum << ": ";

		for (i= firstNum + 1; i < secondNum; i++)
		{
			sum += i;
			if (i % 2 == 1)
			{
				cout << i << " ";
			}
		}
		cout << "\nСумма всех чисел от " << firstNum << " до " << secondNum << " равна " <<sum << endl;
		cout << endl;
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\nЗадание 3\n" << endl;
	{
		{
			int a, b;
			a = 10;
			b = 30;
			for (int i = 1; i <= a; i++)
			{
				for (int j = 1; j <= b; j++)
				{
					if (i == 1 || i == a || j == 1 || j == b)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		cout << "\n\n";

		{
			int z = 11;
			for (int i = 1; i <= z; i++)
			{
				for (int j = 1; j <= i; j++)
				{
					if (i == j)
					{
						cout << "*";
					}
					else if (j == 1 || i == z)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		cout << "\n\n";

		{
			int k = 20, iIndex = 0, jIndex = 0, jIndex2 = 0, mid = (k >> 1);

			for (int i = 1; i <= mid; i++)
			{
				for (int j = 1; j <= k; j++)
				{

					if (i == 1 && j == mid)
					{
						cout << "*";
						iIndex = i + 1;
						jIndex = j - 1;
						jIndex2 = j + 1;
					}
					else if (i == iIndex && j == jIndex)
					{
						cout << "*";
						jIndex--;
					}
					else if (i == iIndex && j == jIndex2)
					{
						cout << "*";
						jIndex2++;
						iIndex += 1;
					}
					else if (i == mid && j != k)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}

				}
				cout << endl;
			}
		}

		cout << "\n\n";

		{
			int n = 11, i, j, mid = (n >> 1) + 1;  //Для симметрии n должен быть НЕЧЕТНЫМ!!

			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i <= mid)
					{
						if (i + j == mid + 1 || j - i == mid - 1)
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
					else
					{
						if (j <= mid)
						{
							if (i - j == mid - 1)
							{
								cout << "*";
							}
							else
							{
								cout << " ";
							}
						}
						else
						{
							if (i + j == n + mid)
							{
								cout << "*";
							}
							else
							{
								cout << " ";
							}
						}


					}
				}
				cout << endl;
			}
		}
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\nЗадание 4\n" << endl;
	{
		int f, factorial=1;
		cout << "\nВведите количество клиентов: ";
		cin >> f;
		int f1 = f;
		do
		{
			factorial *= f;

			if (f == 0)
			{
				factorial = 1;
				break;
			}
			f--;
		} while (f > 0);

		cout << "На одной машине для " << f1 << " клиентов длступно " << factorial << " вариантов доставки товара." << endl;
	}

	system("pause");


	return 0;
}