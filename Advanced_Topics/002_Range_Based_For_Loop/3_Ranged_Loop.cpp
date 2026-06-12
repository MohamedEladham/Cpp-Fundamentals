#include <iostream>
using namespace std;

int main()
{
	// Example 1
	int Array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	for (int i : Array1)
	{
		cout << i;
		if (i < 10) cout << ", ";
	}
	
	cout << "\n";

	// Example 2
	for (int n : { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 })
	{
		cout << n;
		if (n < 100) cout << ", ";
	}
	
	cout << "\n";

	// Example 3
	string NameStudents[] = { "Mohammed", "Ahmmed", "Khaled", "Omar", "Mostafa", "Ashraf" };
	for (string S : NameStudents)
	{
		cout << S;
		if (S != "Ashraf") cout << ", ";
	}
	
	cout << "\n";
	
	// Example 4
	for (string S : { "Mohammed", "Ahmmed", "Khaled", "Omar", "Mostafa", "Ashraf" })
	{
		cout << S;
		if (S != "Ashraf") cout << ", ";
	}

	return 0;
}
