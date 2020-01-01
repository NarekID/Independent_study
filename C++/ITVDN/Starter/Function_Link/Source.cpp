#include <iostream>

using namespace std;

void area(double);
void area(double, double);
void area(double, double, double);

void binarySystem(int);
void octalSystem(int);
void hexadecimalSystem(int);

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\n\tДополнительное задание" << endl << endl;
	{
		double cubeSide;
		cout << "\tПлощадь куба" << endl << endl;
		cout << "Введите ребро: ";
		cin >> cubeSide;
		area(cubeSide);
		cout << endl;

		double heightPrism, basePrism;
		cout << "\tПлощадь правильной четырехугольной призмы" << endl << endl;
		cout << "Введите высоту: ";
		cin >> heightPrism;
		cout << "Введите основание: ";
		cin >> basePrism;
		area(heightPrism, basePrism);
		cout << endl;

		double a, b, c;
		cout << "\tПлощадь прямоугольного параллелепипеда" << endl << endl;
		cout << "Введите ребро a: ";
		cin >> a;
		cout << "Введите ребро b: ";
		cin >> b;
		cout << "Введите ребро b: ";
		cin >> c;
		area(a, b, c);
		cout << endl;
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\n\tЗадача 2" << endl << endl;
	{
		int number, numeralSystem;

		cout << "Введите число: ";
		cin >> number;

		while (1)
		{
			cout << "Введите систему счисления (2, 8, 16): ";
			cin >> numeralSystem;
			if (numeralSystem == 2 || numeralSystem == 8 || numeralSystem == 16)
			{
				break;
			}
		}

		if (numeralSystem == 2)
		{
			binarySystem(number);
		}
		else if (numeralSystem == 8)
		{
			octalSystem(number);
		}
		else if (numeralSystem == 16)
		{
			hexadecimalSystem(number);
		}
	}

	return 0;
}

void area(double h)
{
	cout << "Площадь куба с ребром " << h << " равна " << 6 * pow(h, 2) << endl;
}

void area(double h, double a)
{
	cout << "Площадь правильной четырехугольной призмы с высотой " << h << " и основанием " << a << " равна " << 2 * pow(a, 2) + 4 * a*h << endl;
}

void area(double a, double b, double c)
{
	cout << "Площадь прямоугольного параллелепипеда с ребрами " << a << ", " << b << ", " << c << " равна " << 2 * (a*b + b * c + a * c) << endl;
}

void binarySystem(int num)
{
	if (num >= 2)
	{
		binarySystem(num / 2);
	}
	cout << num % 2;
}

void octalSystem(int num)
{
	/*if (num >= 8)
	{
		octalSystem(num/8);
	}
	cout << num % 8;*/
	cout << oct << num << endl;
}

void hexadecimalSystem(int num)
{
	/*if (num >= 16)
	{
		hexadecimalSystem(num/16);
	}
	cout << num % 16;*/
	cout << hex << uppercase << num << endl;
}