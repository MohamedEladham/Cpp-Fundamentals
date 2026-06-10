#include <iostream>
using namespace std;

// Function that receives a variable by reference (same memory location)
void MyFunction(int& Num1)
{
    // Modifying the original variable (not a copy)
    Num1 = 16000;
    cout << "Coming From My Function " << Num1 << endl;
}

int main()
{
    // Local variable stored in stack memory
    int Num1;

    // Assign initial value
    Num1 = 900;

    // Passing variable by reference (no copy is created)
    MyFunction(Num1);

    // Value is changed because it was passed by reference
    cout << "Coming From Main Function " << Num1 << endl;

    // Another local variable stored in memory
    int number = 500;

    // Print value of variable
    cout << number << endl;

    // Print memory address of variable
    cout << &number << endl;

    // Modify value (same memory address)
    number = 550;

    // Value changes but memory address stays the same
    cout << number << endl;
    cout << &number << endl;

    return 0;
}