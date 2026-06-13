#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptr;

    cout << "Address of a : " << &a << endl;
    cout << "Address of b : " << &b << endl;
    cout << "Address of c : " << &c << endl;

    cout << "\n---------------------\n";

    ptr = &a;

    cout << "ptr points to a\n";
    cout << "Stored Address : " << ptr << endl;
    cout << "Pointer Address: " << &ptr << endl;

    cout << "\n---------------------\n";

    ptr = &b;

    cout << "ptr points to b\n";
    cout << "Stored Address : " << ptr << endl;
    cout << "Pointer Address: " << &ptr << endl;

    cout << "\n---------------------\n";

    ptr = &c;

    cout << "ptr points to c\n";
    cout << "Stored Address : " << ptr << endl;
    cout << "Pointer Address: " << &ptr << endl;

    return 0;
}