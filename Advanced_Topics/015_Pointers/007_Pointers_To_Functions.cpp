#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a + b;
}

void PrintMessage(string msg)
{
    cout << "Hi " << msg << endl;
}

string GetMessage()
{
    return "Hello World";
}

int Sum3(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    // Function pointer to int function
    int (*ptrAdd)(int, int) = Add;
    cout << "Add Result: " << ptrAdd(10, 20) << endl;

    // Function pointer to void function
    void (*ptrPrint)(string) = PrintMessage;
    ptrPrint("Mohammed");

    // Function pointer to string function
    string(*ptrMsg)() = GetMessage;
    cout << ptrMsg() << endl;

    // Function pointer with 3 parameters
    int (*ptrSum3)(int, int, int) = Sum3;
    cout << "Sum3 Result: " << ptrSum3(10, 15, 20) << endl;

    return 0;
}