#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// ���������� ���������� � ���������� ������.
	double ctemp, ftemp;
	// ������� ��������� � ������� �������� ���������� ctemp (Celsius Temp).
	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;
	// ��������� �������� ���������� ftemp (Fahrenheit Temp) � ������� ��� �� �������.
	ftemp = (ctemp * 1.8) + 32;
	cout << "Fahrenheit temp is: " << ftemp;
	return 0;
}