#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;

#define STRMAX 599

int main()
{
	char str[STRMAX + 1];
	char name[100];
	char addr[200];
	char work[200];
	cout << "Enter name and press ENTER: ";
	cin.getline(name, 99);
	cout << "Ener address and press ENTER: ";
	cin.getline(addr, 199);
	cout << "Enter workplace and press ENTER: ";
	cin.getline(work, 199);
	strncpy_s(str, "\nMy name is ",STRMAX);
	strncat_s(str, name, STRMAX - strlen(str));
	strncat_s(str, " I live at ", STRMAX-strlen(str));
	strncat_s(str, addr, STRMAX - strlen(str));
	strncat_s(str, ", \nand I work at ", STRMAX - strlen(str));
	strncat_s(str, work, STRMAX - strlen(str));
	strncat_s(str, ".", STRMAX - strlen(str));
	cout << str;
	return 0;
}