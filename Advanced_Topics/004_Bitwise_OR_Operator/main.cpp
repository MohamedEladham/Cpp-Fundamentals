#include <iostream>
using namespace std;

int main()
{
    //     128   64   32   16    8    4    2    1

    // Example 1
    // 8  = 00001000
    // 7  = 00000111
    // OR = 00001111
    cout << (8 | 7) << endl; // 15

    // Example 2
    // 12 = 00001100
    // 10 = 00001010
    // OR = 00001110
    cout << (12 | 10) << endl; // 14

    // Example 3
    // 5  = 00000101
    // 3  = 00000011
    // OR = 00000111
    cout << (5 | 3) << endl; // 7

    // Example 4
    // 15 = 00001111
    // 7  = 00000111
    // OR = 00001111
    cout << (15 | 7) << endl; // 15

    return 0;
}