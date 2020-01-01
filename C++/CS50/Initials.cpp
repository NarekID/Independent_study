#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter full name: ";
	string name;
	getline(cin, name);

	cout << (char)toupper(name[0]);
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == ' ')
		{
			cout << (char) toupper(name[i + 1]);
		}
	}


	return 0;
}