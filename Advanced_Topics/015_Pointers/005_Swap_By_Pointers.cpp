#include <iostream>
using namespace std;

void Swap(int* N1, int* N2)
{
    int temp;

    temp = *N1;
    *N1 = *N2;
    *N2 = temp;

    cout << "After Swap (Inside Function)\n";
    cout << "N1 Value: " << *N1 << endl;
    cout << "N2 Value: " << *N2 << endl;

    cout << "Pointer N1 holds: " << N1 << endl;
    cout << "Pointer N2 holds: " << N2 << endl;

    cout << endl;
}

int main()
{
    int N1 = 10, N2 = 20;

    cout << "Before Swap\n";
    cout << "N1 Value: " << N1 << endl;
    cout << "N2 Value: " << N2 << endl;

    cout << "N1 Address: " << &N1 << endl;
    cout << "N2 Address: " << &N2 << endl;

    cout << "\n----------------------\n";

    Swap(&N1, &N2);

    cout << "After Swap (Main)\n";
    cout << "N1 Value: " << N1 << endl;
    cout << "N2 Value: " << N2 << endl;

    cout << "N1 Address: " << &N1 << endl;
    cout << "N2 Address: " << &N2 << endl;

    return 0;
}