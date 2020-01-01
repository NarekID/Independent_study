//	Написать программу, которая позволит пользователю ввести строку с текстом,
// затем найти самое короткое слово в веденной строке.
// BUGS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;

	cout << "Enter text: ";
	getline(cin, text);

	int k = 0;
	int min = 0;
	int imin = 0;
	int j = 0;

	for (int i = 0; i < text.size(); i++)
	{
		if (isalpha(text[i]))
		{
			if (i != text.size() - 1)
			{
				k++;
				continue;
			}
			else
			{
				k++;
				if (min > k)
				{
					min = k;
					imin = i;
					j = imin - k + 1;
				}
			}
		}
		if (min == 0)
		{
			min = k;
			imin = i;
			j = imin - k;
		}
		else if (min > k)
		{
			min = k;
			imin = i;
			j = imin - k;
		}
		if (i != text.size() - 1)
		{
			k = 0;
		}
	}

	cout << "Shortest word is ";
	if (imin == text.size() - 1)
	{
		for (int i = j; i <= imin; i++)
		{
			cout << text[i];
		}
	}
	else
	{
		for (int i = j; i < imin; i++)
		{
			cout << text[i];
		}
	}
	
	cout << endl;
	
	return 0;
}