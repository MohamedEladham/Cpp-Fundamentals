#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace InputLib
{
	int ReadANumber(string Message)
	{
		int Number;
		cout << Message;
		cin >> Number;
		return Number;
	}

	string ReadName(string Message)
	{
		string Name;
		cout << Message;
		getline(cin, Name);

		return Name;
	}

	int ReadPositiveNumber(string Message)
	{
		int Number;
		do
		{
			cout << Message;
			cin >> Number;

		} while (Number <= 0);

		return Number;
	}
}
