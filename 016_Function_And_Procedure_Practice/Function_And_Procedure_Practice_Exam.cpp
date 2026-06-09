#include <iostream>
using namespace std;


void MyFunction1()
{
    cout << "This Is My First Procedure, It Got Executed :-) \n";
}

string MyFunction2()
{
    return "This Is Frist Returning Value Function, This Is The Value\n";
}

int MyFunction3()
{
    int Num1, Num2;
    Num1 = 10;
    Num2 = 15;
    int Sum = Num1 * Num2;
    return Sum;
}

float MyFunction4()
{
    float Num3, Num4;
    Num3 = 99.12;
    Num4 = 23.55;
    float Sum2 = Num3 / Num4;
    return Sum2;
}

// HomeWork

void TakeTwoNumbers(float& Num1, float& Num2)
{
    cout << "Please Enter First Number: ";
    cin >> Num1;
    cout << "Please Enetr Secound Number: ";
    cin >> Num2;
}

void MySumProcedure(float Num1, float Num2)
{
    float Sum1 = Num1 + Num2;
    cout << "This Is My Sum Proceduers: " << Sum1 << endl;
}

float MySumFunction(float N1, float N2)
{
    float Sum1 = N1 + N2;
    return Sum1;
}

int main()
{
    MyFunction1();
    cout << MyFunction2() << endl;
    cout << &MyFunction2 << endl;
    string message1 = MyFunction2() + "Hello Mohammed " + "fff " + "fdsjhjfh ";
    cout << message1 << "\n\n";

    int SumNumbers = MyFunction3();
    cout << SumNumbers << endl;
    cout << (SumNumbers - 3) / 3 << endl;

    float SumNumbers2 = MyFunction4();
    cout << SumNumbers2 << endl;
    cout << SumNumbers2 + 6.006 << endl;
    cout << ceil(SumNumbers2 + 6.006) << endl;
    cout << ceil(SumNumbers2 + 6.006) + 1 << endl;
    cout << floor(SumNumbers2 + 6.006) << endl;
    cout << floor(SumNumbers2 + 6.006) - 1 << endl;

    float Num1, Num2;

    TakeTwoNumbers(Num1, Num2);
    MySumProcedure(Num1, Num2);
    MySumProcedure(Num1, Num2);

    cout << "This Is My Function: " << MySumFunction(Num1, Num2) << endl;
    cout << "This Is My Function: " << MySumFunction(Num1, Num2) / 3 << endl;

    return 0;
}