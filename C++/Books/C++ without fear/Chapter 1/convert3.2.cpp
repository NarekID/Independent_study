#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	// ���������������� ������ convert3.1
	// ���������� ���������� ctemp � ���������� ������.
	double ftemp;
	// ������� ��������� � ������� �������� ���������� ftemp (Fahrenheit Temp).
	cout << "Input a Fahrenheit Temp and press ENTER: ";
	cin >> ftemp;
	// ��������� �������� ���������� ftemp � ������� ��� �� �������.
	cout << "Celsius temp is: " << (ftemp - 32)/1.8;
}