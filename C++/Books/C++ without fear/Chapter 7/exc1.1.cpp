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
	strncat_s(str, name, 599 - strlen(str));
	strcat_s(str, " I live at ");
	strncat_s(str, addr, 599- strlen(str));
	strcat_s(str, ", \nand I work at ");
	strncat_s(str, work, 599 - strlen(str));
	strcat_s(str, ".");
	cout << str;
	return 0;
}