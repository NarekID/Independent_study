#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter text: ";
	string text;
	getline(cin, text);

	cout << "Enter key: ";
	int key;
	cin >> key;

	while (key >= 26)
	{
		key %= 26;
	}

	while (key < 0)
	{
		cout << "Enter key: ";
		cin >> key;
	}

	for (int i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]))
		{
			if (islower(text[i]))
			{
				text[i] += key;

				if (text[i] > 122)
				{
					text[i] -= 26;
				}
			}
			else if (isupper(text[i]))
			{
				text[i] += key;

				if (text[i] > 90)
				{
					text[i] -= 26;
				}
			}
		}
		cout << text[i];
	}
	cout << endl;

	return 0;
}