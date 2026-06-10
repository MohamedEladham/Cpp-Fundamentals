#include <iostream>
using namespace std;

void PrintNumberFromAndToUsingForLoop()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
	}
}

void PrintNumberFromAndToUsingWhileLoop()
{
	int i = 1;
	while (i <= 5)
	{
		cout << i << endl;
		i++;
	}
}

int CheckPositiveNumberUsingWhileLop()
{
	int Number;
	cout << "\n\n> Please Enter A Positive Number: ";
	cin >> Number;

	while (Number <= 0)
	{
		cout << "\n\n> The Number Is Not Positive Please Try Again \n";
		cout << "> Enter A Positive Number: ";
		cin >> Number;
	}
	return Number;
}

int ReadNumberInRangeUsingWhileLop(int From, int To)
{
	int Number;
	cout << "\n\n> Please Enter A Number Between " << From << " And " << To << ": ";
	cin >> Number;

	while (Number < From || Number > To)
	{
		cout << "\n\n> The Number Is Not Between " << From << " And " << To << " Please Try Again. \n";
		cout << "> Enter A Number Between " << From << " And " << To << ": ";
		cin >> Number;
	}
	return Number;
}

int main()
{
	cout << "\n> The Positive Number: " << CheckPositiveNumberUsingWhileLop() << endl;
	cout << "\n\n> The Number Is Valid: " << ReadNumberInRangeUsingWhileLop(-5, 5) << endl;
	return 0;
}