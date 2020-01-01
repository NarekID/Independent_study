#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, name, breed, age;
	cout << "Enter Your dog's name and press ENTER: ";
	getline(cin, name);
	cout << "Enter Your dog's breed and press ENTER: ";
	getline(cin, breed);
	cout << "Enter Your dog's age and press ENTER: ";
	getline(cin, age);
	str = "\nMy dog's name is " + name + " his (her) breed is " + breed + " and age is " + age + ".\n";
	cout << str;
	return 0;

}
