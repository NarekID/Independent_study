#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string filename;
	string catalog;
	cout << "Enter catalog and press ENTER (for exampe C:\\Programs\\): ";
	getline(cin,catalog);
	int length = catalog.size();
	cout << "Enter a file name and press ENTER (for example A.txt): ";
	getline(cin, filename);
	catalog.insert(length, filename);
	ofstream file_out(catalog);
	if (!file_out)
	{
		cout << "File " << filename << " could not be opened.";
		return -1;
	}
	cout << "File " << filename << " was opened.";
	file_out << "I am Blaxxon," << endl;
	file_out << "The cosmic computer." << endl;
	file_out << "Fear me.";
	file_out.close();
	return 0;
}