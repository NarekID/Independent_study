#include <iostream>

using namespace std;

namespace NS_Sum {
	namespace NS_Difference {
		namespace NS_Multiply {
			namespace NS_Divide {
				int sum(int a, int b) {
					return a + b;
				}
				int diff(int a, int b) {
					return a - b;
				}
				int mul(int a, int b) {
					return a * b;
				}
				double divide(int a, int b) {
					return a / b;
				}
			}
			
		}
		
	}
}


int main()
{
	using namespace NS_Sum::NS_Difference::NS_Multiply::NS_Divide;

	int a = 10;
	int b = 5;

	// sum
	{
		int c = sum(a, b);
		cout << a << " + " << b << " = " << c << endl;
	}
	
	// difference
	{
		int c = diff(a, b);
		cout << a << " - " << b << " = " << c << endl;
	}

	// multiply
	{
		int c = mul(a, b);
		cout << a << " * " << b << " = " << c << endl;
	}
	
	// divide
	{
		int c = divide(a, b);
		cout << a << " / " << b << " = " << c << endl;
	}
	return 0;
}
    