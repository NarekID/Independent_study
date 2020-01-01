#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string text;
	string filename;
	cout << "Enter file name and press ENTER: ";
	getline(cin, filename);
	ofstream input(filename);
	while (1)
	{
		cout << "Enter your text and press ENTER: ";
		getline(cin, text);
		input << text << endl;
		if (text.empty())
		{
			break;
		}
	}
	return 0;
	input.close();
}