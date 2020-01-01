// exc3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void convert_to_lower(char *s);

int main()
{
	char s[100];
	cout << "Enter string to convert to and press ENTER: ";
	cin.getline(s, 99);
	convert_to_lower(s);
	cout << "The converterd string is:" << endl;
	cout << s;
	return 0;
}

void convert_to_lower(char *s)
{
	int i, length = strlen(s);
	for (i = 0; i < strlen(s);i++)
	{
		s[i] = tolower(s[i]);
	}
}