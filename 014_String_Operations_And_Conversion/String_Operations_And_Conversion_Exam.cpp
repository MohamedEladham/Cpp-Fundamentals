#include <iostream>
#include <string>
using namespace std;

int main()
{
    string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << size(MyString) << endl;      // 26
    cout << MyString.length() << endl;   // 26

    cout << MyString[2] << endl;         // Will Print > C

    string S1 = "10", S2 = "20";
    cout << S1 + S2 << endl;             // Will Print > 1020

    int Sum;
    Sum = stoi(S1) + stoi(S2);
    cout << Sum << endl;                 // Will Print 30

    // Not Valid Poeration
    string S3 = "AB", S4 = "CD";
    int sum1;
    sum1 = stoi(S3) + stoi(S4);
    cout << sum1 << endl;             // Error   

    // Homework 
    string name, num1, num2;
    cout << "Please Enter The Name: ";
    getline(cin, name);

    cout << "The length Of String Is: " << name.length() << endl;
    cout << "character at 0, 2, 4, 7 are: " << name[0] << ", " << name[2] << ", " <<
        name[4] << ", " << name[7] << endl;
    
    cout << "\n\n***************************\n\n";

    cout << "Please Enter Number 1: ";
    cin >> num1;
    cout << "Please Enter Number 2: ";
    cin >> num2;

    cout << "Comunicating Num1 And Num2: " << num1 + num2 << endl;
    
    int sum2 = stoi(num1) * stoi(num2);
    cout << "Sum Num1 * Num2 = " << sum2 << endl;

    return 0;
}