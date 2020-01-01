#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// Объявление переменной n с полавающей точкой.
	double n;
	// Вывод подсказки и ввод значения переменной n.
	cout << "Input a number and press ENTER: ";
	cin >> n;
	// Расчет и вывод результата возведения в квадрат.
	cout << "The square is: " << n*n;
}