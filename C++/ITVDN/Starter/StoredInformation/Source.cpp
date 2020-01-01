#include <iostream>
#include <climits>

using namespace std;

int main()
{
	cout << showpos;
	cout << "\nType\t\tByte (bit)\tMin Value\t\tMax Value" << endl;
	cout << "\n--------------------------------------------------------------------------------------" <<endl;
	
	cout << "\nchar\t\t" << sizeof(char) << " (" << sizeof(char) * 8 << ")\t\t" << CHAR_MIN << "\t\t\t" << showbase  <<CHAR_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nUnsigned char\t" << sizeof(unsigned char) << " (" << sizeof(unsigned char) * 8 << ")\t\t0" << "\t\t\t" << UCHAR_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nshort\t\t" << sizeof(short) << " (" << sizeof(short) * 8 << ")\t\t" << SHRT_MIN << "\t\t\t" << SHRT_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nUnsigned short\t" << sizeof(unsigned short) << " (" << sizeof(unsigned short) * 8 << ")\t\t" << "0\t\t\t" << USHRT_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nint\t\t" << sizeof(int) << " (" << sizeof(int) * 8 << ")\t\t" << INT_MIN << "\t\t" << INT_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nUnsigned int\t" << sizeof(unsigned int) << " (" << sizeof(unsigned int) * 8 << ")\t\t0" << "\t\t\t" << UINT_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nlong\t\t" << sizeof(long) << " (" << sizeof(long) * 8 << ")\t\t" << LONG_MIN << "\t\t" << LONG_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nUnsigned long\t" << sizeof(unsigned long) << " (" << sizeof(unsigned long) * 8 << ")\t\t0" << "\t\t\t" << ULONG_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nlong long\t" << sizeof(long long) << " (" << sizeof(long long) * 8 << ")\t\t" << LLONG_MIN << "\t" << LLONG_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nUnsigned long\t" << sizeof(unsigned long long) << " (" << sizeof(unsigned long long) * 8 << ")\t\t0" << "\t\t\t" << ULLONG_MAX << endl;
	cout << "long" << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nfloat\t\t" << sizeof(float) << " (" << sizeof(float) * 8 << ")\t\t" << FLT_MIN << "\t\t" << FLT_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\ndouble\t\t" << sizeof(double) << " (" << sizeof(double) * 8 << ")\t\t" << DBL_MIN << "\t\t" << DBL_MAX << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cout << "\nbool\t\t" << sizeof(bool) << " (" << sizeof(bool) * 8 << ")\t\t0 (false)\t\t1 (true)"  << endl;
	cout << "\n--------------------------------------------------------------------------------------" << endl;

	cin.get();
	return 0;
}