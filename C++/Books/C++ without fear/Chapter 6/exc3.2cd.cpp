// Exercise 06.03.02.txt
// This program demonstrates a function that copies all the
//  contents of one array into another.

#include <iostream>
using namespace std;

void copy_array(int *arr1, int *arr2, int n);

int a[10];
int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

int main() {
	int *p;

	copy_array(a, b, 10);  // Copy a[] <- b[]

	// Print out all the elements of the array a.

	for (p = a; p < a + 10; p++)
		cout << *p << "  ";

	return 0;
}
void copy_array(int *p1, int *p2, int n) {
	while (n-- > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
}

