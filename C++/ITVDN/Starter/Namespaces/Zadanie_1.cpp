#include <iostream>
using namespace std;

namespace NS_Sum {
	int sum(int a, int b)
	{
		return a + b;
	}
}

namespace NS_Difference {
	int diff(int a, int b) {
		return a - b;
	}
}

namespace NS_Multiply {
	int mul(int a, int b) {
		return a * b;
	}
}

namespace NS_Divide {
	double divide(int a, int b) {
		return a / b;
	}
}

namespace NS_Mod {
	int mod(int a, int b) {
		return a % b;
	}
}

// using namespace NS_Mod;

int main()
{
	int a = 10;
	int b = 5;	
	int c;

	using namespace NS_Sum;

	c = sum(a, b);
	cout << a << " + " << b << " = " << c << endl;

	using namespace NS_Difference;

	c = diff(a, b);
	cout << a << " - " << b << " = " << c << endl;

	using namespace NS_Multiply;

	c = mul(a, b);
	cout << a << " * " << b << " = " << c << endl;

	using namespace NS_Divide;

	c = divide(a, b);
	cout << a << " / " << b << " = " << c << endl;

	using namespace NS_Mod;

	c = mod(a, b);
	cout << a << " % " << b << " = " << c << endl;



	return 0;
}

//void func1() {
//	using namespace ns_mod;
//
//	int a = 5;
//	int b = 1;
//	int c = mod(a, b);
//}