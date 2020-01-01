#include <iostream>
#include <string>

using namespace std;

void printSalary(const int salary, const double percent)
{
	cout << "���������� ����� ��������: " << salary * percent << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\n\t�������������� �������\n" << endl;
	{
		unsigned long long int num, num2;

		cout << "������� �����, ������� ����� ���������: ";
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
				cout << "��� ����� �������� �������� ������.\n" << endl;
			}
		}
		if (num != 1)
		{
			cout << "��� ����� �� �������� �������� ������.\n" << endl;
		}

		cout << "\n���. ������� ������� ��������\n" << endl;

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
			cout << "��� ����� �������� �������� ������. (2)\n" << endl;
		}
		else
		{
			cout << "��� ����� �� �������� �������� ������. (2)\n" << endl;
		}

	}

	cout.width(60);
	cout.fill('-');
	cout << "" << endl;

	cout << "\n\t������� 1\n" << endl;
	{
		string str;
		int i, strlen;
		bool isExitSymb = false;

		cout << "������� ����� � ������� Enter (���� ������ '#' ��������� ����������!" << endl;
		cin.ignore();
		getline(cin, str);
		cout << "\n������������ �����:\t" << str << endl;

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
			cout << "��������� ���������, ��� ��� ��� ������� ������ '#'!" << endl;
		}
		else
		{
			cout << "���������� �����:\t";
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

	cout << "\n\t������ 2\n" << endl;
	{
		unsigned int year, salary;

		cout << "������� ������� ���: ";
		cin >> year;

		cout << "������� ��������: ";
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

	cout << "\n������ 3. ������� 1 (� ������� ������� �� ������� %)\n" << endl;
	{
		int a;
		cout << "������� �����, ������� ����� ��������� �� ��������: ";
		cin >> a;

		if (a % 2 == 0)
		{
			cout << "\n�������� ����� ������!" << endl;
		}
		else
		{
			cout << "\n�������� ����� ��������!" << endl;
		}
		cout << endl;

		cout << "������� 2 (����� (��������) & 1 == 1)\n" << endl;

		if ((a & 1) == 0)
		{
			cout << "�������� ����� ������! (2)" << endl;
		}
		else
		{
			cout << "�������� ����� ��������! (2)" << endl;
		}
	}

	return 0;
}