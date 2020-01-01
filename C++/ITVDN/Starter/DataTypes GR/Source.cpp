#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Дополнительное задание\n" << endl; 
	short a = 10; short b = 4;

	cout.precision(4);

	cout << a << " + " << b << " = " << a + b << endl;

	cout << a << " - " << b << " = " << a - b << endl;

	cout << a << " * " << b << " = " << a * b << endl;


	cout << a << " / " << b << " = " << (double) a / b << endl;

	cout << a << " % " << b << " = " << a % b << endl;

	cout << "\n------------------------------------------------------\n" << endl;

	cout << "Задача 2." << endl;
	cout << endl;
	int x = 10, y = 12, z = 3;
	cout << "x = 10; y = 12; z = 3" << endl;
	cout << endl;

	x += y - x++*z;
	cout << "x += y - x++*z" << endl << "x = " << x << endl;
	cout << endl;

	x = 10;
	z = --x - y * 5;
	cout << "z = --x - y * 5" << endl << "z = " << z << endl;
	cout << endl;
	
	x = 10; z = 3;
	y /= x + 5 % z;
	cout << "y /= x + 5 % z" << endl << "y = " << y << endl;
	cout << endl;

	x = 10, y = 12, z = 3;
	z = x++ + y * 5;
	cout << "z = x++ + y * 5" << endl << "z = " << z << endl;
	cout << endl;


	x = 10, y = 12, z = 3;
	x = y - x++ *z;
	cout << "x = y - x++ *z" << endl << "x = " << x << endl;
	cout << endl;

	cout << "------------------------------------------------------\n" << endl;

	cout << "Задание 3.\n" << endl;
	
	int q = 15, w = 9, e = 1;

	cout << "q = " << q << "; w = " << w << "; e = " << e << ";" << endl;

	cout << "Среднее арифметическое этих 3 чисел = " << (double)(q + w + e) / 3 << endl;

	cout << "\n------------------------------------------------------\n" << endl;

	cout << "Задание 4.\n" << endl;

	cout.precision(7);

	double pi = 3.14159;
	int r = 15;
	
	cout << "Площадь круга с радиусом " << r << " равна " << pi * pow(r,2) << endl;

	cout << "\n------------------------------------------------------\n" << endl;

	cout << "Задание 5.\n" << endl;

	char c = 88;
	cout << "Символ с кодом " << (int) c << " это - " << c << endl;


	cin.get();

	return 0;
}