#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 15;

    int* ptr;

    ptr = &a;

    cout << "Value of a using ptr : " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    cout << "\n-------------------\n";

    *ptr = 25;

    cout << "Updated a value      : " << a << endl;
    cout << "Value using ptr      : " << *ptr << endl;

    cout << "\n-------------------\n";

    ptr = &b;

    cout << "Value of b using ptr : " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    cout << "\n-------------------\n";

    *ptr = 17;

    cout << "Updated b value      : " << b << endl;
    cout << "Value using ptr      : " << *ptr << endl;

    return 0;
}