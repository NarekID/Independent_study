#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// ќбъ€вление переменных с полавающей точкой.
	double ctemp, ftemp;
	// ¬ывести подсказку и считать значение переменной ctemp (Celsius Temp).
	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;
	// ¬ысчитать значение переменной ftemp (Fahrenheit Temp) и вывести его на консоль.
	ftemp = (ctemp * 1.8) + 32;
	cout << "Fahrenheit temp is: " << ftemp;
	return 0;
}