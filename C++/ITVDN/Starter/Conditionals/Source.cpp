#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Дополнительное заданиче.\n" << endl;
	{
		int num = 140;
		int a, b, c;

		a = num / 100;
		b = num / 10 % 10;
		c = num % 10;

		if ((a == b && a == c) || (b == 0 && c == 0))
		{
			cout << num << endl;
			cout << endl;
		}
		else if (a == b && a != c)
		{
			if (c != 0)
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t" << c * 100 + a * 10 + b << endl;
				cout << endl;
			}
			else
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t" << endl;
				cout << endl;
			}
		}
		else if (a == c && a != b)
		{
			if (b != 0)
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t" << b * 100 + a * 10 + c << endl;
				cout << endl;
			}
			else
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t" << endl;
				cout << endl;
			}
		}
		else if (b == c && b != a)
		{
			cout << num << "\t" << b * 100 + a * 10 + c << "\t" << b * 100 + c * 10 + a << endl;
			cout << endl;
		}
		else
		{
			if (b != 0 && c != 0)
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t";
				cout << b * 100 + a * 10 + c << "\t" << b * 100 + c * 10 + a << "\t";
				cout << c * 100 + a * 10 + b << "\t" << c * 100 + b * 10 + c << endl;
				cout << endl;
			}
			else if (b == 0)
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t";
				cout << c * 100 + a * 10 + b << "\t" << c * 100 + b * 10 + c << endl;
				cout << endl;
			}
			else if (c == 0)
			{
				cout << num << "\t" << a * 100 + c * 10 + b << "\t";
				cout << b * 100 + a * 10 + c << "\t" << b * 100 + c * 10 + a << "\t";
				cout << endl;
			}
		}
	}

	cout << "\n-----------------------------------------------------------------------\n" << endl;

	cout << "Задание 1.\n" << endl;
	{

		int AB = 4, BC = 3, CA = 8;

		cout << "Сторона AB = " << AB << endl;
		cout << "Сторона BC = " << BC << endl;
		cout << "Сторона CA = " << CA << endl;
		cout << endl;

		if ((AB + BC > CA) && (AB + CA > BC) && (BC + CA > AB))
		{
			cout << "Да, это треугольник!" << endl;
		}
		else
		{
			cout << "Нет, это не треугольник!" << endl;
		}
	}

	cout << "\n-----------------------------------------------------------------------\n" << endl;

	cout << "Задача 2.\n" << endl;
	{
		int x = 2, y = 1, z = 3;

		if ((x == y) || (x == z) || (y == z))
		{
			cout << "Ошибка! Cреди чисел есть равные" << endl;
		}
		else if ((x > y) && (x > z))
		{
			if (y > z)
			{
				cout << "Среднее число y = " << y << endl;
			}
			else
			{
				cout << "Среднее число z = " << z << endl;
			}
		}
		else if ((y > x) && y > z)
		{
			if (x > z)
			{
				cout << "Среднее число x = " << x << endl;
			}
			else
			{
				cout << "Среднее число z = " << z << endl;
			}
		}
		else //if ((z > x) && (z > y))
		{
			if (x > y)
			{
				cout << "Среднее число x = " << x << endl;
			}
			else
			{
				cout << "Среднее число y = " << y << endl;
			}
		}
	}
	cin.get();

	return 0;
}