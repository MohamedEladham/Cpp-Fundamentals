#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	const float PI = 3.14159265f;

	// Control decimal places dynamically using %.*f
	printf("Precision Specification Of %.*f\n", 1, PI);
	printf("Precision Specification Of %.*f\n", 2, PI);
	printf("Precision Specification Of %.*f\n", 3, PI);
	printf("Precision Specification Of %.*f\n", 4, PI);

	// Fixed precision examples
	printf("\nPI = %.1f\n", PI);
	printf("PI = %.2f\n", PI);
	printf("PI = %.3f\n", PI);

	float x = 7.0f, y = 9.0f;

	// Formatting floating-point calculations
	printf("\nThe Float Division Is: %.2f / %.3f = %.3f\n", x, y, x / y);

	double d = 12.45;

	// Display double values with custom precision
	printf("\nThe Double Value Is: %.3f\n", d);

	// Format arithmetic expressions
	printf("Sum Double %.3f + %.3f = %.3f\n", d, d, d + d);

	printf("Double = %.2f / %.3f = %.3f\n", d, d, d / d);

	// Demonstrates rounding behavior
	double Number = 5.6789;

	printf("\nOriginal Value = %.4f\n", Number);
	printf("Rounded To 2 Digits = %.2f\n", Number);
	printf("Rounded To 1 Digit = %.1f\n", Number);

	return 0;
}