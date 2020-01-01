#include <iostream>
#include <string>

using namespace std;

void printSalary(const int salary, const double percent)
{
	cout << "Заработная плата составит: " << salary * percent << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\n\tДополнительное задание\n" << endl;
	{
		unsigned long long int num, num2;

		cout << "Введите число, которое нужно проверить: ";
		cin >> num;

		num2 = num;

		while (num > 1)
		{
			if (num % 2 == 1)
			{
				break;
			}

			num /= 2;

			if (num == 1)
			{
				cout << "Это число является степенью двойки.\n" << endl;
			}
		}
		if (num != 1)
		{
			cout << "Это число НЕ является степенью двойки.\n" << endl;
		}

		cout << "\nДоп. задание решение побитово\n" << endl;

		bool isNum = true;

		while (num2 > 1)
		{
			if (num2 & 1 == 1)
			{
				isNum = false;
				break;
			}

			num2 >>= 1;
		}

		if (isNum)
		{
			cout << "Это число является степенью двойки. (2)\n" << endl;
		}
		else
		{
			cout << "Это число НЕ является степенью двойки. (2)\n" << endl;
		}

	}

	cout.width(60);
	cout.fill('-');
	cout << "" << endl;

	cout << "\n\tЗадание 1\n" << endl;
	{
		string str;
		int i, strlen;
		bool isExitSymb = false;

		cout << "Введите текст и нажмите Enter (если ввести '#' программа завершится!" << endl;
		cin.ignore();
		getline(cin, str);
		cout << "\nОригинальный текст:\t" << str << endl;

		strlen = str.size();

		for (i = 0; i < strlen; i++)
		{
			if (islower(str[i]))
			{
				str[i] = toupper(str[i]);
			}
			else if (isupper(str[i]))
			{
				str[i] = tolower(str[i]);
			}
			else if (str[i] == '#')
			{
				isExitSymb = true;
				break;
			}
		}
		if (isExitSymb)
		{
			cout << "Программа завершена, так как был введенн символ '#'!" << endl;
		}
		else
		{
			cout << "Измененный текст:\t";
			for (i = 0; i < strlen; i++)
			{
				cout << str[i];
			}
			cout << endl;
		}
		cout << endl;
	}

	cout.width(60);
	cout.fill('-');
	cout << "" << endl;

	cout << "\n\tЗадача 2\n" << endl;
	{
		unsigned int year, salary;

		cout << "Введите выслугу лет: ";
		cin >> year;

		cout << "Введите зарплату: ";
		cin >> salary;

		if (year > 0 && year < 5)
		{
			printSalary(salary, 1.1);
		}
		else if (year >= 5 && year < 10)
		{
			printSalary(salary, 1.15);
		}
		else if (year >= 10 && year < 15)
		{
			printSalary(salary, 1.25);
		}
		else if (year >= 15 && year < 20)
		{
			printSalary(salary, 1.35);
		}
		else if (year >= 20 && year < 25)
		{
			printSalary(salary, 1.45);
		}
		else
		{
			printSalary(salary, 1.5);
		}
		cout << endl;
	}

	cout.width(60);
	cout.fill('-');
	cout << "" << endl;

	cout << "\nЗадача 3. Решение 1 (с помощью остатка от деления %)\n" << endl;
	{
		int a;
		cout << "Введите число, которое нудно проверить на четность: ";
		cin >> a;

		if (a % 2 == 0)
		{
			cout << "\nВведеное число четное!" << endl;
		}
		else
		{
			cout << "\nВведеное число нечетное!" << endl;
		}
		cout << endl;

		cout << "Решение 2 (число (побитово) & 1 == 1)\n" << endl;

		if ((a & 1) == 0)
		{
			cout << "Введеное число четное! (2)" << endl;
		}
		else
		{
			cout << "Введеное число нечетное! (2)" << endl;
		}
	}

	return 0;
}