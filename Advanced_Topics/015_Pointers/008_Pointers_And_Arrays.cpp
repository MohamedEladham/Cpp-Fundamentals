#include <iostream>
using namespace std;

int main()
{
    int Arr1[] = { 10, 20, 330, 410, 570 };

    int* ptr = Arr1;

    cout << "Array using pointer arithmetic:\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Index " << i << endl;
        cout << "Value  : " << *(ptr + i) << endl;
        cout << "Address: " << (ptr + i) << endl;
        cout << "----------------------\n";
    }

    cout << "\n========================\n\n";

    string Names[3][3] =
    {
        {"Osama", "Ashraf", "Gamal"},
        {"Khaled", "Omar", "Mostafa"},
        {"Sayed", "Ameer", "Ayman"}
    };

    cout << "2D Array using pointer logic:\n\n";

    for (int i = 0; i < 3; i++)
    {
        string* rowPtr = Names[i];

        for (int j = 0; j < 3; j++)
        {
            cout << "Value  : " << *(rowPtr + j) << endl;
            cout << "Address: " << (rowPtr + j) << endl;
        }

        cout << "----------------------\n";
    }

    string* p = Names[0];
    *(p + 1) = "OO";

    cout << "\nAfter modification:\n";
    cout << Names[0][1] << endl;

    return 0;
}