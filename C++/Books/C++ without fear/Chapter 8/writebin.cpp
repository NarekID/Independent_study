#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int get_int(int default_value);
char name[20];

int main()
{
	char filename[81];
	int n, age, recsize = sizeof(name) + sizeof(int);
	cout << "Enter file name: ";
	cin.getline(filename, 80);
	fstream fbin(filename, ios::binary | ios::in | ios::out);
	if (!fbin)
	{
		cout << "Could not open file " << filename;
		return -1;
	}
	cout << "Enter file record number: ";
	n = get_int(0);
	cout << "Enter name: ";
	cin.getline(name, 19);
	cout << "Enter age: ";
	age = get_int(0);
	fbin.seekp(n*recsize);
	fbin.write(name, 20);
	fbin.write(reinterpret_cast<char*>(&age), sizeof(int));
	fbin.close();
	return 0;
}

int get_int(int default_value)
{
	char s[81];
	cin.getline(s, 80);
	if (strlen(s) == 0)
	{
		return default_value;
	}
	return atoi(s);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
