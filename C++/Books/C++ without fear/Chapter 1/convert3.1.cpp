#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// ќбъ€вление переменных с полавающей точкой.
	double ctemp, ftemp;
	// ¬ывести подсказку и считать значение переменной ftemp (Fahrenheit Temp).
	cout << "Input a Fahrenheit Temp and press ENTER: ";
	cin >> ftemp;
	// ¬ысчитать значение переменной ctemp (Celsius temp) и вывести его на консоль.
	ctemp = (ftemp - 32)/1.8;
	cout << "Fahrenheit temp is: " << ctemp;
	return 0;
}