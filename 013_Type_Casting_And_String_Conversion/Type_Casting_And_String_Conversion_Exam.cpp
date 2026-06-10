#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Num1;
    double Num2 = 18.99;

    // Implicit Conversion From double To int
    Num1 = Num2;

    // Explicit Conversion
    Num1 = int(Num2);

    // Explicit Conversion
    Num1 = (int)Num2;

    // Convert string To int and float and double
    string str = "123.456";
    cout << str << endl;

    // convert string to integer
    int strToint = stoi(str);
    cout << strToint << endl;
    cout << strToint / 2 << endl;

    // Convert string To float
    float strTofloat = stof(str);
    cout << strTofloat << endl;
    cout << strTofloat + .005 << endl;

    // Convert string to double
    double strTodouble = stod(str);
    cout << strTodouble << endl;
    cout << strTodouble * .002 << endl;

    // Convert int To string
    int Num3 = 123;
    cout << Num3 << endl;
    cout << Num3 + 2 << endl;

    string str1 = to_string(Num3);
    cout << str1 << endl;
    // cout << str1 + 2 <<endl;  // Error

    // Convert float To string
    float Num4 = 122.334;
    cout << Num4 << endl;
    cout << Num4 + .016 << endl;

    string str2 = to_string(Num4);
    cout << str2 << endl;
    cout << sizeof(Num4) << endl;            // 4
    cout << sizeof(to_string(Num4)) << endl; // 32
    // cout << str2 + 3 <<endl;  // Error

    // Convert double To String
    double Num5 = 190.0052;

    string str3 = to_string(Num5);
    cout << str3 << endl;

    string str4;
    str4 = Num5;
    cout << str4 << endl;

    // Homework1 1
    str4 = "43.22";
    cout << "This Number Is string: " << str4 << endl;
    // cout << "This Number Is string: " << str4 / 3 <<endl;   // Error

    double Num6 = stod(str4);
    cout << "Convert String To Double: " << Num6 << endl;

    float Num7 = stof(str4);
    cout << "Convert String To Float: " << Num7 << endl;

    int Num8 = stoi(str4);
    cout << "Convert String To Integer: " << Num8 << endl;

    // Homework 2
    int Num9 = 20;
    string str5 = to_string(Num9);
    cout << "Convert Integer To String: " << str5 << endl;

    // Homework 3
    double Num10 = 33.5;
    string str6 = to_string(Num10);
    cout << "Convert Double To String: " << str6 << endl;

    // Homework 4
    float Num11 = 55.23;
    string str7 = to_string(Num11);
    cout << "Convert Float To String: " << str7 << endl;

    int Num12;
    Num12 = Num11;
    cout << "Implicit Convert Float To Integer: " << Num12 << endl;

    Num12 = int(Num11);
    cout << "Explicit Convert float To Integer1: " << Num12 << endl;

    Num12 = (int)Num11;
    cout << "Explicit Convert float To Integer2: " << Num12 << endl;

    return 0;
}