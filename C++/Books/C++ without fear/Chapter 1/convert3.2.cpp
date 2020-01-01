#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// Оптимизированная версия convert3.1
	// Объявление переменной ctemp с полавающей точкой.
	double ftemp;
	// Вывести подсказку и считать значение переменной ftemp (Fahrenheit Temp).
	cout << "Input a Fahrenheit Temp and press ENTER: ";
	cin >> ftemp;
	// Высчитать значение переменной ftemp и вывести его на консоль.
	cout << "Celsius temp is: " << (ftemp - 32)/1.8;
}