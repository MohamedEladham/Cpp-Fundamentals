#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Please Enter The Firts Number: ";
    cin >> num1;
    cout << "Please Enter The Secound Number: ";
    cin >> num2;

    cout << num1 + num2 <<endl;
    cout << num1 - num2 <<endl;
    cout << num1 * num2 <<endl;
    cout << num1 / num2 <<endl;
    cout << fmod(num1, num2) <<endl;
    return 0;
}