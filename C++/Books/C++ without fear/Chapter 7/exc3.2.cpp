#include "pch.h"
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void convert_to_upper(char *s);

int main()
{
	char s[100];
	cout << "Enter string to convert and press ENTER: ";
	cin.getline(s, 99);
	convert_to_upper(s);
	cout << "The converted stind is:" << endl;
	cout << s;
	return 0;
}

void convert_to_upper(char *s)
{
	while (*s++)
	{
		*s = toupper(*s);
		if (*s == '\0')
		{
			break;
		}
	}
}

