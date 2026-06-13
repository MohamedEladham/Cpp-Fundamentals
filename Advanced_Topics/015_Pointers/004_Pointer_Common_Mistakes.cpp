#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int* p = nullptr;

    // =========================
    // WRONG vs CORRECT (Address assignment)
    // =========================

    // p = x;   // Wrong: value cannot be stored in pointer

    p = &x;     // Correct: pointer stores address

    // =========================
    // WRONG vs CORRECT (Dereferencing)
    // =========================

    // *p = &x;  // Wrong: cannot assign address to value

    *p = x;     // Correct: assign value through pointer

    cout << "x value: " << x << endl;
    cout << "x address: " << &x << endl;
    cout << "*p value: " << *p << endl;
    cout << "p (address): " << p << endl;

    return 0;
}