#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter key word: ";
	string key;
	getline(cin, key);

	bool isAlpha;

	while (1)
	{
		isAlpha = true;
		for (int i = 0; i < key.length(); i++)
		{
			if (!isalpha(key[i]))
			{
				isAlpha = false;
				break;
			}
		}		

		if (isAlpha)
		{
			break;
		}

		cout << "Keyword must be only A-Z and a-z: ";
		getline(cin, key);
	}

	cout << "plaintext:  ";
	string text;
	getline(cin, text);

	cout << "ciphertext: ";		
	for (int i = 0, k = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]))
		{
			if (islower(text[i]))
			{
				if (islower(key[k]))
				{
					cout << (char) (((((text[i] - 97) + key[k]) - 97) % 26) + 97);
				}
				else if (isupper(key[k]))
				{
					cout << (char) (((((text[i] - 97) + key[k]) - 65) % 26) + 97);
				}
			}
			else if (isupper(text[i]))
			{
				if (islower(key[k]))
				{
					cout << (char)(((((text[i] - 65) + key[k]) - 97) % 26) + 65);
				}
				else if (isupper(key[k]))
				{
					cout << (char)(((((text[i] - 65) + key[k]) - 65) % 26) + 65);
				}
			}
			k++;
		}
		else
		{
			cout << text[i];
		}

		if (k == key.length())
		{
			k = 0;
		}

	}
	cout << endl;

	return 0;
}