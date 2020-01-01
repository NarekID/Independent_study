//Для введённой пользователем с клавиатуры строки (максимальная длина строки — 80 символов) программа должна определить,
//корректно ли расставлены скобки (круглые, фигурные, квадратные) или нет.
//Перемешивание скобок (пример: «{[}]») считается некорректным вариантом.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char str[81];

	char *pStr = str;

	bool isCurly = false;
	bool isSquare = false;
	bool isRound = false;

	cout << "\nВведите строку (не больше 80 символов)" << endl;
	cin.getline(str, 80);

	for (int i = 0; i < strlen(str); i++)
	{
		if (*(pStr+i) == '{')
		{
			isCurly = true;
			continue;
		}
		else if (*(pStr + i) == '[')
		{
			isSquare = true;
			continue;
		}
		else if (*(pStr + i) == '(')
		{
			isRound = true;
			continue;
		}
	}

	for (int i = 0; i < strlen(str); i++)
	{
		if ((isSquare) && (*(pStr + i) == ']'))
		{
			isSquare = false;
			continue;
		}
		else if ((isSquare) && (*(pStr + i) == '}' || *(pStr + i) == ')'))
		{
			*(pStr + i) = ']';
			isSquare = false;
			continue;
		}
		 if ((isRound) && (*(pStr + i) == ')'))
		{
			isRound = false;
			continue;
		}
		else if ((isRound) && (*(pStr + i) == '}' || *(pStr + i) == ']'))
		{
			*(pStr + i) = ')';
			isRound = false;
			continue;
		}
		 if ((isCurly) && (*(pStr + i) == '}'))
		{
			isCurly = false;
			continue;
		}
		else if ((isCurly) && (*(pStr + i) == ']' || *(pStr + i) == ')'))
		{
			*(pStr + i) = '}';
			isCurly = false;
			continue;
		}
	}

	for (int i = 0; i < strlen(str); i++)
	{
		cout << *(pStr + i);
	}
	cout << endl;
	
	return 0;
}