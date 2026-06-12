#include <iostream>
using namespace std;

// Recursively prints numbers from N to M (ascending order)
void PrintNumbersFormNToM(int N, int M)
{
	if (N <= M)
	{
		cout << N << " ";
		PrintNumbersFormNToM(N + 1, M);
	}
}

// Recursively prints numbers from M to N (descending order)
void PrintNumberFromMToN(int N, int M)
{
	if (M >= N)
	{
		cout << M << " ";
		PrintNumberFromMToN(N, M - 1);
	}
}

// Recursively calculates power: N^M
int PowerOfNumber(int N, int M)
{
	// Base case: any number power 0 = 1
	if (M == 0)
	{
		return 1;
	}
	else
	{
		// Recursive case: N * N^(M-1)
		return N * PowerOfNumber(N, M - 1);
	}
}

int main()
{
	cout << PowerOfNumber(2, 4) << endl;
	return 0;
}