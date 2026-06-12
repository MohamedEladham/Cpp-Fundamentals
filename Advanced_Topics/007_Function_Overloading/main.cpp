#include <iostream>
using namespace std;

// Overload for double values.
double MySum(double a, double b)
{
	return a + b;
}

// Overload for float values.
float MySum(float a, float b)
{
	return a + b;
}

// Overload for integer values.
int MySum(int a, int b)
{
	return a + b;
}

// Overload with three parameters.
float MySum(int a, int b, float c)
{
	return a + b + c;
}

int main()
{
	cout << MySum(10, 20) << endl;
	cout << MySum(11.5, 12.54) << endl;
	cout << MySum(12.665, 114.555) << endl;
	cout << MySum(10, 20, 55.1) << endl;
	cout << MySum(10, 20, 3.9) << endl;
	cout << MySum(10, 3.9, 11.22) << endl;
	return 0;
}
