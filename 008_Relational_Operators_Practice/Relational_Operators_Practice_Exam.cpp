#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Please Enter The First Number: ";
    cin >> num1;

    cout << "Please Enter The Secound Number: ";
    cin >> num2;

    cout << num1 << " = " << num2 << " IS: " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " IS: " << (num1 != num2) <<endl;
    cout << num1 << " > " << num2 << " IS: " << (num1 > num2) <<endl;
    cout << num1 << " < " << num2 << " IS: " << (num1 < num2) <<endl; 
    cout << num1 << " >= " << num2 << " IS: " << (num1 >= num2) <<endl; 
    cout << num1 << " <= " << num2 << " IS: " << (num1 <= num2) <<endl; 

    cout << "-------------------------------\n";

    if (num1 == num2)
        cout << num1 << " = " << num2 << " IS: True. " <<endl;
    else
        cout << num1 << " = " << num2 << " IS: False." <<endl;

    if (num1 != num2)
        cout << num1 << " != " << num2 << " IS: True. " <<endl;
    else
        cout << num1 << " != " << num2 << " IS: False." <<endl;

    if (num1 > num2)
        cout << num1 << " > " << num2 << " IS: True. " <<endl;
    else
        cout << num1 << " > " << num2 << " IS: False." <<endl;

    if (num1 < num2)
        cout << num1 << " < " << num2 << " IS: True. " <<endl;
    else
        cout << num1 << " < " << num2 << " IS: False." <<endl;

    if (num1 >= num2)
        cout << num1 << " >= " << num2 << " IS: True. " <<endl;
    else
        cout << num1 << " >= " << num2 << " IS: False." <<endl;

    if (num1 <= num2)
        cout << num1 << " <= " << num2 << " IS: True. " <<endl;
    else
        cout << num1 << " <= " << num2 << " IS: False." <<endl;

    return 0;
}