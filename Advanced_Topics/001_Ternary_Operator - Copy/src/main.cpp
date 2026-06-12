#include <iostream>
#include "InputLib.h";
#include "OutputLib.h";
using namespace std;

int main()
{
	// Example 1
	int Mark = 50;
	string Result;
	Result = (Mark > 50) ? "Pass :-) \n" : "Fail :-( \n";
	cout << Result << endl;

	// Example 2
	(Mark >= 50) ? cout << "Pass :-) \n" : cout << "Fail :-( \n";

	// HomeWork
	int Num1 = 0, Num2 = 0;
	string Result1 = "", Result2 = "";

	cout << "\nCheck Number Positive Or Negative. \n";

	Num1 = InputLib::ReadANumber("\nPlease Enter A Number: ");
	Result1 = (Num1 >= 0) ? "Positive" : "Negative";
	cout << "\nNumber Is: " << Result1 << endl;

	cout << "\nCheck Number Ziro Or Positive Or Negative. \n";

	Num2 = InputLib::ReadANumber("\nPlease Enter A Number: ");
	Result2 = (Num2 == 0) ? "Ziro" : (Num2 > 0) ? "Positive" : "Negative";
	cout << "\nNumber Is: " << Result2 << endl;

	return 0;
}