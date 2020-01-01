#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void convert_to_upper(char *s);

int main()
{
	char filename[81];
	char linesnum[81];
	int lines = 25,c;
	cout << "Enter a file name and press ENTER: ";
	//getline(cin, filename);
	cin.getline(filename, 80);
	ifstream text_file(filename);
	if (!text_file)
	{
		cout << "File " << filename << " not found or could not be opened.";
		return -1;
	}
	cout << "File " << filename << " opened." << endl;
	char input[81];
	while (1)
	{
		for (int i = 1; i <= lines && !text_file.eof(); i++)
		{
			text_file.getline(input, 80);
			convert_to_upper(input);
			cout << input << endl;
		}
		if (text_file.eof())
		{
			break;
		}
		cout << "Print more? Enter number of lines to print, or Q to exit:  ";
		cin.getline(linesnum, 80);
		c = linesnum[0];
		if (c == 'Q' || c == 'q')
		{
			break;
		}
		else
		{
			lines = atoi(linesnum);
		}
	}
	return 0;
}

void convert_to_upper(char *s)
{
	for (;*s; s++)
	{
		*s = toupper(*s);
	}
}