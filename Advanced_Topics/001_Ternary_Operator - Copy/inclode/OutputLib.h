#pragma once
#include <iostream>
using namespace std;

namespace OutPutLib
{
	void PrintName(string Name)
	{
		cout << "\n Your Name Is " << Name << endl;
	}

	void PrintNumber(string Message, float Number)
	{
		cout << Message << Number << endl;
	}
}