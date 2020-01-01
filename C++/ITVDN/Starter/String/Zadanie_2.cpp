// Zadanie_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string text;
	char key;

	int count = 0;

	cout << "Enter text: ";
	getline(cin, text);

	cout << endl << "Be careful, A is not equal a!" << endl;
	cout << "Enter symbol to count: ";
	cin >> key;

	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == key)
		{
			count++;
		}
	}

	cout << "Symbol \"" << key << " \" repeats " << count << " times." << endl;


	return 0;
}