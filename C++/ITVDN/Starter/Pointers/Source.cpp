#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n\tДополнительное задание\n" << endl;
	{
		char str1[81];
		char str2[81];

		cout << "Введите строку (не более 80 символов): ";
		cin.getline(str1, 80);

		char *pStr = str1;
		char *pStr2 = str2;

		int j = 0, length = 0;		//new string length counter

		for (int i = 0; i < strlen(str1); i++)
		{
			if (*(pStr + i) == ' ' && *(pStr + (i + 1)) == ' ')
			{
				j++;
				continue;
			}
			else if (*pStr == ' ')
			{
				*(pStr2 + (i - j)) = *(pStr + (i + 1));
				length++;	//new string length counter
			}
			else
			{
				*(pStr2 + (i - j)) = *(pStr + i);
				length++;	//new string length counter
			}
		}

		cout << endl;

		for (int i = 0; i < length; i++)
		{
			cout << *(pStr2 + i);
		}
		cout << endl;
	}

	cout.width(80);
	cout.fill('-');
	cout << "\n";

	cout << "\n\tЗадание 2\n" << endl;
	{
		char str[81];
		int digit[10] = { 0,0,0,0,0,0,0,0,0,0 };

		char *pStr = str;
		int *pDigit = digit;

		cout << "Введите строку (не более 80 символов): ";
		cin.getline(str, 80);

		for (int i = 0; i < strlen(str); i++)
		{
			for (int j = 0; j < 9; j++)
			{
				char cj = char(j + 48);
				if (*(pStr + i) == cj)
				{
					(*(pDigit + j))++;
					break;
				}
			}
		}

		int maxDigitTimes = 0;
		int maxDigit;


		for (int j = 0; j < 9; j++)
		{

			if (maxDigitTimes < *(pDigit + j))
			{
				maxDigit = j;
				maxDigitTimes = *(pDigit + j);
			}
		}
		if (maxDigitTimes == 0)
		{
			cout << "\nЦифры в строке отсутствуют." << endl;
		}
		else
		{
			cout << "\nЧисло " << maxDigit << " повторялось " << maxDigitTimes << " раз. " << endl;
		}
	}

	return 0;
}