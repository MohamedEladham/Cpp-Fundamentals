#include <iostream>
using namespace std;

int main()
{
    // Create three integer variables and one pointer variable.
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptr;

    // Display the memory addresses of all variables.
    cout << "Address of a : " << &a << endl;
    cout << "Address of b : " << &b << endl;
    cout << "Address of c : " << &c << endl;

    cout << "\n---------------------\n";

    // Assign the address of variable 'a' to the pointer.
    ptr = &a;


    // Result:
    // ptr stores the address of 'a'.
    // The address of ptr itself remains unchanged.
    cout << "ptr points to a\n";
    cout << "Stored Address : " << ptr << endl;
    cout << "Pointer Address: " << &ptr << endl;

    cout << "\n---------------------\n";

    // Reassign the pointer to store the address of variable 'b'.
    ptr = &b;


    // Result:
    // ptr now stores the address of 'b'.
    // The address of ptr itself is still unchanged.
    cout << "ptr points to b\n";
    cout << "Stored Address : " << ptr << endl;
    cout << "Pointer Address: " << &ptr << endl;

    cout << "\n---------------------\n";

    // Reassign the pointer to store the address of variable 'c'.
    ptr = &c;


    // Result:
    // ptr now stores the address of 'c'.
    // The address of ptr itself remains the same.
    cout << "ptr points to c\n";
    cout << "Stored Address : " << ptr << endl;
    cout << "Pointer Address: " << &ptr << endl;

    return 0;
}