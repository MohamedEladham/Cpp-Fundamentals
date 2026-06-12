#pragma once
#include <iostream>
#include <limits>
using namespace std;

namespace ValidationLib
{
	int ValidationNumber(int Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Number, Enter A Valid One: ";
			cin >> Number;
		}

		return Number;
	}

	char ValidationCharacter(char Character)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Character, Enter A Valid One: ";
			cin >> Character;
		}

		return Character;
	}
}



