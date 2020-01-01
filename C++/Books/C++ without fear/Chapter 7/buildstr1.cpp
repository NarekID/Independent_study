#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[600];
	char name[100];
	char addr[200];
	char work[200];
	cout << "Enter name and press ENTER: ";
	cin.getline(name, 99);
	cout << "Ener address and press ENTER: ";
	cin.getline(addr, 199);
	cout << "Enter workplace and press ENTER: ";
	cin.getline(work, 199);
	strcpy_s(str, "\nMy name is ");
	strcat_s(str, name);
	strcat_s(str, " I live at ");
	strcat_s(str, addr);
	strcat_s(str, ", \nand I work at ");
	strcat_s(str, work);
	strcat_s(str, ".");
	cout << str;
	return 0;
}