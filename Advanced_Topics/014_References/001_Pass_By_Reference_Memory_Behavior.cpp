#include <iostream>
using namespace std;

// Demonstrates pass by reference.
// Changes made here affect the original variables.
void UpdateValues(int& x, int& y)
{
    x = 12;
    y = 23;

    cout << "Inside Function\n";

    cout << "x Value   : " << x << endl;
    cout << "x Address : " << &x << endl;
    cout << endl;

    cout << "y Value   : " << y << endl;
    cout << "y Address : " << &y << endl;
    cout << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    // Original variables before function call.
    cout << "Before Function Call\n";

    cout << "a Value   : " << a << endl;
    cout << "a Address : " << &a << endl;
    cout << endl;

    cout << "b Value   : " << b << endl;
    cout << "b Address : " << &b << endl;
    cout << endl;

    // Pass variables by reference.
    UpdateValues(a, b);

    // Variables after modification inside the function.
    cout << "After Function Call\n";

    cout << "a Value   : " << a << endl;
    cout << "a Address : " << &a << endl;
    cout << endl;

    cout << "b Value   : " << b << endl;
    cout << "b Address : " << &b << endl;
    cout << endl;

    return 0;
}