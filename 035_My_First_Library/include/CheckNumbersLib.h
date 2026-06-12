#pragma once
#include <iostream>
#include <cmath>
using namespace std;

namespace CheckNumbersLib
{
	enum enNumberType { Odd, Even };

	enNumberType CheckEvenNumber(int Number)
	{
		if (Number % 2 == 0)
			return Even;
		else
			return Odd;
	}

	bool IsPerfectNumber(int Number)
	{
		int M = (int)floor(Number / 2);
		int Sum = 0;

		for (int i = 1; i <= M; i++)
		{
			if (Number % i == 0)
			{
				Sum += i;
			}
		}

		return Number == Sum;
	}
}