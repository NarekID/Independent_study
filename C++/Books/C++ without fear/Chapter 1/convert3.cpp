#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// ���������������� ������ convert1
	// ���������� ���������� ctemp � ���������� ������.
	double ctemp;
	// ������� ��������� � ������� �������� ���������� ctemp (Celsius Temp).
	cout << "Input a Celsius temp and press ENTER: ";
	cin >> ctemp;
	// ��������� �������� ���������� ctemp � ������� ��� �� �������.
	cout << "Fahrenheit temp is: " << (ctemp * 1.8) + 32;
}