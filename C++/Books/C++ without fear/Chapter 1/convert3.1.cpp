#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// ���������� ���������� � ���������� ������.
	double ctemp, ftemp;
	// ������� ��������� � ������� �������� ���������� ftemp (Fahrenheit Temp).
	cout << "Input a Fahrenheit Temp and press ENTER: ";
	cin >> ftemp;
	// ��������� �������� ���������� ctemp (Celsius temp) � ������� ��� �� �������.
	ctemp = (ftemp - 32)/1.8;
	cout << "Fahrenheit temp is: " << ctemp;
	return 0;
}