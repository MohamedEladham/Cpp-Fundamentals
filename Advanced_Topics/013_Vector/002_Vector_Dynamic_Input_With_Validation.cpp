#include<iostream>
#include<vector>
#include <limits>
using namespace std;

/*
========================================================
FUNCTION: ReadValidatedNumber
PURPOSE:
    Read a valid integer from user with input validation.

PROCESS:
    1- Read input from user
    2- Check if input is valid
    3- If invalid:
        - Clear error state
        - Ignore wrong input
        - Ask user again
    4- If valid:
        - Return number

CONCEPTS:
    - cin.fail()
    - cin.clear()
    - cin.ignore()
    - Input validation loop
========================================================
*/
int ReadValidatedNumber()
{
    int Number;

    while (true)
    {
        cin >> Number;

        if (!cin.fail())
            return Number;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid Number, Please Enter A Valid Number: ";
    }
}


/*
========================================================
FUNCTION: ReadNumbersUsingVector
PURPOSE:
    Read multiple numbers from user and store them in vector.

PROCESS:
    1- Ask user to enter a number
    2- Validate input using ReadValidatedNumber()
    3- Store number in vector using push_back
    4- Ask user if they want to continue (Y/N)
    5- Repeat until user stops

CONCEPTS:
    - vector reference passing (vector<int>&)
    - dynamic insertion (push_back)
    - user-controlled loop
    - function reuse
========================================================
*/
void ReadNumbersUsingVector(vector<int>& vNumbers)
{
    int Number;
    char AddMore = 'Y';

    while (AddMore == 'Y' || AddMore == 'y')
    {
        cout << "\nPlease Enter A Number: ";

        // STEP: Read validated number from user
        Number = ReadValidatedNumber();

        // STEP: Store number inside vector
        vNumbers.push_back(Number);

        // STEP: Ask user to continue or stop
        cout << "Do You Want To Add More Numbers? (Y/N): ";
        cin >> AddMore;
    }
}


/*
========================================================
FUNCTION: PrintNumbers
PURPOSE:
    Print all elements stored inside vector.

PROCESS:
    1- Loop through all vector elements
    2- Print each element

CONCEPTS:
    - const reference (no modification allowed)
    - range-based for loop
========================================================
*/
void PrintNumbers(const vector<int>& vNumbers)
{
    cout << "\nVector Elements:\n";

    // STEP: Iterate and print each element
    for (int Number : vNumbers)
    {
        cout << Number << " ";
    }

    cout << endl;
}


/*
========================================================
FUNCTION: main
PURPOSE:
    Program entry point

PROCESS:
    1- Create empty vector
    2- Read numbers from user
    3- Print stored numbers

CONCEPTS:
    - program flow control
    - function decomposition
    - vector lifecycle
========================================================
*/
int main()
{
    // STEP: Create vector to store numbers
    vector<int> vNumbers;

    // STEP: Fill vector with user input
    ReadNumbersUsingVector(vNumbers);

    // STEP: Display vector content
    PrintNumbers(vNumbers);

    return 0;
}