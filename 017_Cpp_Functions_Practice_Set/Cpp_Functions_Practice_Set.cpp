#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float I_EnterOneNumber()
{
    float N1;
    cout << "Enter Side Area N1: ";
    cin >> N1;
    return N1;
}

void I_EnterTwoNumbers(int& N1, int& N2)
{
    cout << "Please Enter First Number: ";
    cin >> N1;
    cout << "Please Enter Secound Number: ";
    cin >> N2;
}

void F_EnterTwoNumbers(float& F1, float& F2)
{
    cout << "Please Enter Side Area A: ";
    cin >> F1;
    cout << "Please Enter Side Area B: ";
    cin >> F2;
}

void F_EnterThreeNumbers(float& F1, float& F2, float& F3)
{
    cout << "Enter Side Area A: ";
    cin >> F1;

    cout << "Enter Side Area B: ";
    cin >> F2;

    cout << "Enter Side Area C: ";
    cin >> F3;
}

int MySumFunction(int Num1, int Num2)
{
    return Num1 + Num2;
}

// Problem 1
void PrintMyName1()
{
    cout << "My Name Is Mohamed";
}

// Problem 2
void ReadName1(string& Name)
{
    cout << "Please Enter Your Name: ";
    getline(cin, Name);
}

void PrintMyName2(string Name)
{
    cout << "The Name Are: " << Name << endl;
}

// Problem 14
void PrintResult(int num1, int num2)
{
    cout << "\nBefor Swapping\n";
    cout << "First Number A: " << num1 << endl;
    cout << "Secound Number B: " << num2 << endl;
}

void Swapping(int num1, int num2)
{
    int swap = 0;
    swap = num2;
    num2 = num1;
    num1 = swap;

    cout << "\n\nAfter Swapping\n";
    cout << "First Number A: " << num1 << endl;
    cout << "Secound Number B: " << num2 << endl;
}

// Problem 15 
float CalculatingRectangleArea(float A, float B)
{
    cout << "Rectangle Area = ";
    return A * B;
}

// Problem 16
float CalcRectangleAreaThroughDiagonal(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));
    return Area;
}

void PrintResult(float Area)
{
    cout << "The Area = " << Area << endl;
}

// Problem 18
float CalcCircleArea(float R)
{
    const float PI = 3.141592653589;
    float CircleArea = PI * pow(R, 2);
    return CircleArea;
}

// Problem 19
float CalcCircleAreaThroughDiameter(float D)
{
    const float PI = 3.141592653589;
    float Result;
    Result = (PI * pow(D, 2)) / 4;
    return Result;
}

// Problem 20
float CalcCircleAreaInscribedSquare(float A)
{
    const float PI = 3.141592653589;  // 3.141592653589
    float Result = (PI * pow(A, 2)) / 4;
    return Result;
}

// Problem 21
float CalcCircleAreaAlongCircumference(float L)
{
    const float PI = 3.141592653589;
    float Result = (pow(L, 2)) / (4 * PI);
    return Result;
}


// Problem 22
float ClacCircleAreaInscribedIsoscelesTriandle(float A, float B)
{
    const float PI = 3.141592653589;
    float Area;
    Area = (PI * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

// Problem 23
float Calc_Circle_Area_Described_Around_Arbitary_Triangle(float A, float B, float C)
{
    const float PI = 3.141592653589;
    float P = (A + B + C) / 2;
    float Area;
    Area = PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
    return Area;
}

// Problem 32
int Power_Of_Number(int num, int pow)
{
    int result = 1;
    if (pow == 0)
    {
        return result;
    }
    else
    {
        for (int i = 1; i <= pow; i++)
        {
            result = result * num;
        }
    }
    return result;
}

// Problem 42
void Enter_Days_Hours_Minutes_Seconds(float& Days, float& Hours, float& Minutes, float& Secounds)
{
    cout << "Enter The Days: ";
    cin >> Days;
    cout << "Enter The Hours: ";
    cin >> Hours;
    cout << "Enter The Minutes: ";
    cin >> Minutes;
    cout << "Enter The Secounds: ";
    cin >> Secounds;
}

float Task_Duration_In_Seconds(float Days, float Hours, float Minutes, float Seconds)
{
    float SecondsInDay = 60 * 60 * 24 * Days;
    float SecondsInHours = 60 * 60 * Hours;
    float SecondsInMinute = 60 * Minutes;

    float TotalNumberOfSeconds = SecondsInDay + SecondsInHours + SecondsInMinute + Seconds;

    return TotalNumberOfSeconds;
}

void Print_Total_Number_Of_Secounds(float TotalNumberOfSeconds)
{
    cout << "Total Number Of Secounds = " << TotalNumberOfSeconds << endl;
}

// Problem 43
float Enter_Number_Of_Secounds()
{
    float Secounds;
    cout << "Enter Number Of Secouds: ";
    cin >> Secounds;
    return Secounds;
}

void Convert_Second_To_Days_Hours_Minutes_Seconds(float Seconds)
{
    float DaysPerSeconds = 60 * 60 * 24;
    float HoursPerSeconds = 60 * 60;
    float MinutesPerSeconds = 60;

    float NumberOfDays = floor(Seconds / DaysPerSeconds);
    float Remender1 = fmod(Seconds, DaysPerSeconds);

    float NumberOfHours = floor(Remender1 / HoursPerSeconds);
    Remender1 = fmod(Remender1, HoursPerSeconds);

    float NumberOfMinutes = floor(Remender1 / MinutesPerSeconds);
    Remender1 = fmod(Remender1, MinutesPerSeconds);

    float NumberOfSeconds = floor(Remender1);

    cout << "Number Of Days = " << NumberOfDays << endl;
    cout << "Number Of Hours = " << NumberOfHours << endl;
    cout << "Number Of Minutes = " << NumberOfMinutes << endl;
    cout << "Number Of Seconds = " << NumberOfSeconds << endl;

    cout << "Total Seconds Per Days And Hours And Minutes And Seconds = " <<
        NumberOfDays << ':' << NumberOfHours << ':' << NumberOfMinutes << ':' << NumberOfSeconds << endl;
}

int main()
{
    float F1, F2, F3;
    int Num1, Num2, Power;
    
    cout << "\n\nSum Numbers\n";
    I_EnterTwoNumbers(Num1, Num2);
    int Sum1 = MySumFunction(Num1, Num2);
    cout << "This Is My Sum Function: " << Sum1 << endl;

    cout << "\n-----------------------------------------\n";

    cout << "\n\nSwapping Number\n";
    I_EnterTwoNumbers(Num1, Num2);
    PrintResult(Num1, Num2);
    Swapping(Num1, Num2);
    
    cout << "\n-----------------------------------------\n";

    cout << "\n\nRectangle Area\n";
    F_EnterTwoNumbers(F1, F2);
    float RectangleArea = CalculatingRectangleArea(F1, F2);
    cout << RectangleArea << endl;

    cout << "\n-----------------------------------------\n";
    
    cout << "\n\nCalc Rectangle Area Through Diagonal\n";
    F_EnterTwoNumbers(F1, F2);
    PrintResult(CalcRectangleAreaThroughDiagonal(F1, F2));

    cout << "\n-----------------------------------------\n";
    
    cout << "\n\nCircle Area\n";
    PrintResult(CalcCircleArea(I_EnterOneNumber()));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nCalc Circle Area Through Diameter\n";
    PrintResult(CalcCircleAreaThroughDiameter(I_EnterOneNumber()));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nCalcCircle Area Inscribed Square\n";
    PrintResult(CalcCircleAreaInscribedSquare(I_EnterOneNumber()));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nCalc Circle Area Along Circum ference\n";
    PrintResult(CalcCircleAreaAlongCircumference(I_EnterOneNumber()));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nCalc Circle AreaInscribed Isosceles Triandle\n";
    I_EnterTwoNumbers(Num1, Num2);
    PrintResult(ClacCircleAreaInscribedIsoscelesTriandle(Num1, Num2));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nCalc Circle Area Described Around Arbitary Triangle\n";
    F_EnterThreeNumbers(F1, F2, F3);
    PrintResult(Calc_Circle_Area_Described_Around_Arbitary_Triangle(F1, F2, F3));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nPower Of Number\n";
    cout << "Enter The Number: ";
    cin >> Num1;
    cout << "Enter The Power: ";
    cin >> Power;
    cout << "Power Of Number Is = " << Power_Of_Number(Num1, Power) << endl;

    cout << "\n-----------------------------------------\n";

    cout << "\n\nTotal Number Of Secounds\n";
    float Days, Hours, Minuts, Secounds;
    Enter_Days_Hours_Minutes_Seconds(Days, Hours, Minuts, Secounds);
    Print_Total_Number_Of_Secounds(Task_Duration_In_Seconds(Days, Hours, Minuts, Secounds));

    cout << "\n-----------------------------------------\n";

    cout << "\n\nSeconds OF Days Hours Minutes Seconds\n";
    Convert_Second_To_Days_Hours_Minutes_Seconds(Enter_Number_Of_Secounds());

    return 0;
}
