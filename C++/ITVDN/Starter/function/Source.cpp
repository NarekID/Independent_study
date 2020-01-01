#include <iostream>

int sum(int, int);
void Hello();
double average(double, double, double);
bool negationFunc(bool);
bool conjuctionFunc(bool, bool);
bool disjunctionFunc(bool, bool);

int helloCouter = 0;

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\n\tДополнительное задание\n" << endl;
	{
		int a, b;

		cout << "\nВведите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;

		cout << endl << a << " + " << b << " = " << sum(a, b) << endl;
		cout << endl;
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\n\tЗадание \n" << endl;
	{
		int num;

		cout << "Введите число: ";
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			Hello();
		}

		cout << "\nФункия была вызвана " << helloCouter << "  раз!" << endl;
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\n\tЗадание 3\n" << endl;
	{
		double num1, num2, num3;
		
		cout << "\nВведите первое число: ";
		cin >> num1;
		cout << "Введите второе число: ";
		cin >> num2;
		cout << "Введите третье число: ";
		cin >> num3;

		cout << "\nСреднее арифметическое " << num1 << " + " << num2 << " + " << num3 << " = " << average(num1, num2, num3) << endl;
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";

	cout << "\n\tЗадание 4\n" << endl;
	{
		cout << boolalpha;

		bool operand1 = true;
		bool operand2 = false;

		cout << endl;

		cout << "Negation:" << endl;
		cout << "!" << operand1 << " = " << negationFunc(operand1) << endl;
		cout << "!" << operand2 << " = " << negationFunc(operand2) << endl;
		cout << endl;

		cout << "Conjuction:" << endl;
		cout << operand2 << " && " << operand2 << " = " << conjuctionFunc(operand1, operand2) << endl;
		cout << operand2 << " && " << operand1 << " = " << conjuctionFunc(operand1, operand2) << endl;
		cout << operand1 << " &&" << operand2 << " = " << conjuctionFunc(operand1, operand2) << endl;
		cout << operand1 << " &&" << operand1 << " = " << conjuctionFunc(operand1, operand2) << endl;
		cout << endl;

		cout << "Disjunction:" << endl;
		cout << operand2 << " || " << operand2 << " = " << disjunctionFunc(operand1, operand2) << endl;
		cout << operand2 << " || " << operand1 << " = " << disjunctionFunc(operand1, operand2) << endl;
		cout << operand1 << " || " << operand2 << " = " << disjunctionFunc(operand1, operand2) << endl;
		cout << operand1 << " || " << operand1 << " = " << disjunctionFunc(operand1, operand2) << endl;
		cout << endl;
	}

	cout.width(100);
	cout.fill('-');
	cout << "\n";


}



int sum(int a, int b)
{
	return a + b;
}

void Hello()
{
	cout << "Hello, Dear User!" << endl;
	helloCouter++;
}

double average(double a, double b, double c)
{
	return (a + b + c) / 3;
}

bool negationFunc(bool op)
{
	return !op;
}

bool conjuctionFunc(bool op1, bool op2)
{
	return op1 && op2;
}

bool disjunctionFunc(bool op1, bool op2)
{
	return op1 || op2;
}

