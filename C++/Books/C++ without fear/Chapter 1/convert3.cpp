#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// Оптимизированная версия convert1
	// Объявление переменной ctemp с полавающей точкой.
	double ctemp;
	// Вывести подсказку и считать значение переменной ctemp (Celsius Temp).
	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;
	// Высчитать значение переменной ctemp и вывести его на консоль.
	cout << "Fahrenheit temp is: " << (ctemp * 1.8) + 32;
}