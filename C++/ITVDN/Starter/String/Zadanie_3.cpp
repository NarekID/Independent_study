#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	cout << "Enter string:" << endl;

	getline(cin, str);

	cout << str.size() << endl;

	for (int i = str.size() - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;



	return 0;
}