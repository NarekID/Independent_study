#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int c; //mutqagrac simvol
	int i; //cikli hashvich
	int lines = 24;
	char filename[81];
	char input_line[81];
	cout << "Enter a file name and press ENTER: ";
	cin.getline(filename, 80);
	ifstream file_in(filename);
	if (!file_in)
	{
		cout << "File " << filename;
		cout << " could not be opened.";
		return -1;
	}
	while (1)
	{
		for (i=1; i <= lines && !file_in.eof(); i++)
		{
			file_in.getline(input_line, 80);
			cout << input_line << endl;
		}
		if (file_in.eof())
		{
			break;
		}
		cout << "More? (Press 'Q' and ENTER to quit, or # lines to print.)>";
		cin.getline(input_line, 80);
		c = input_line[0];
		if (c == 'Q' || c == 'q')
		{
			break;
		}
		else
		{
			lines = atoi(input_line);
		}

	}
	return 0;
}