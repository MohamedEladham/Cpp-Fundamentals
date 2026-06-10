#include <iostream>
using namespace std;

void ReadArrayData(float Arr1[], int& Length)
{
	cout << "\n\n ** Enter Number From 1 To 100 ** \n";
	cout << "=> How Many Number Do You Want Enter: ";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "\n> Please Enter The Number " << i + 1 << ": ";
		cin >> Arr1[i];
	}
}

void PrintArrayData(float Arr1[], int Length)
{
	cout << "\n\n-------------------------------\n";
	cout << "> Numbers Of Entry \n\n";

	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "> Number [" << i + 1 << "] : " << Arr1[i] << endl;
	}
}

float CalculateArraySum(float Arr1[], int Length)
{
	float Sum = 0;

	for (int i = 0; i <= Length - 1; i++)
	{
		Sum += Arr1[i];
	}

	return Sum;
}

float CalculateArrayAverage(float Arr1[], int Length)
{
	return CalculateArraySum(Arr1, Length) / Length;
}

int main()
{
	int Length;
	float Arr1[100];

	ReadArrayData(Arr1, Length);
	PrintArrayData(Arr1, Length);

	cout << "\n-------------------------------\n\n";

	float Sum = CalculateArraySum(Arr1, Length);

	cout << "> Sum Of Numbers = " << Sum << endl;

	cout << "> Average Of Numbers = " << Sum / Length << endl;

	return 0;
}