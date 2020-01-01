#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;

char *get_a_string(char *start_addr, char *dest);
char strs[10][100];

int main()
{
	int i, n;
	char *p;
	char buffer[200];
	cout << "Enter strings, separated by commas, ";
	cout << endl << "and press ENTER: ";
	cin.getline(buffer, 199);
	p = buffer;
	for (i = 0; i<10; i++)
	{
		p = get_a_string(p, strs[i]);
		if (!p)
		{
			break;
		}
	}
	if (i == 11)
	{
		n = 10;
	}
	else
	{
		n = i;
	}
	cout << n << " strings were read." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << strs[i] << endl;
	}
	return 0;
}

char *get_a_string(char *start_addr, char *dest)
{
	char *p = start_addr;
	while (*p == ',' || *p == ' ')
	{
		p++;
	}
	if (*p == '\0')
	{
		return (char*) 0;
	}
	while (*p != ',' && *p != '\0')
	{
		*dest++ = *p++;
	}
	*dest = '\0';
	return p;
}
