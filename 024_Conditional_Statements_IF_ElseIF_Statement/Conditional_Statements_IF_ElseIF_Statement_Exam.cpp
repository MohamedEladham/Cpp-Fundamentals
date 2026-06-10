#include <iostream>
#include <string>
using namespace std;

// Porblem 4
void AskeUser(int& age, string& Answer)
{
    cout << "Enter The Age: ";
    cin >> age;
    cout << "You Have Driver Licenes: ";
    cin >> Answer;
}

void PrintResult(int age, string Answer)
{
    if (age > 21 && Answer == "Yes")
    {
        cout << "Hired.\n";
    }
    else
    {
        cout << "Rejected. \n";
    }
}

// Problem 8
void ReadOneMark(float& Marks)
{
    cout << "Please Enter The Marks: ";
    cin >> Marks;
}

void PrintTheMarks(float Marks)
{
    if (Marks >= 50)
    {
        cout << "Pass. \n";
    }
    else
    {
        cout << "Fail. \n";
    }
}

// Problem 11
void ReadThreeMarks(float& A, float& B, float& C)
{
    cout << "Enter Mark A: ";
    cin >> A;

    cout << "Enter Mark B: ";
    cin >> B;

    cout << "Enter Mark C: ";
    cin >> C;
}

float CalcAverageOfMarks(float A, float B, float C)
{
    float Average;
    Average = (A + B + C) / 3;
    return Average;
}

void PrintResultOfMarks(float Average)
{
    if (Average >= 50)
    {
        cout << "Congragulations. \n";
    }
    else
    {
        cout << "Fail. \n";
    }
}

// Problem 24
short ReadAge()
{
    short Age;
    cout << "Enter Your Age: ";
    cin >> Age;
    return Age;
}

void PrintResultOfAge(short Age)
{
    if (Age >= 18 && Age <= 45)
    {
        cout << "Your Age Is Valid. \n";
    }
    else
    {
        cout << "Your Age Is Invalid. \n";
    }
}

// Problem 49
void ReadPassword(int& Password)
{
    cout << "Enter The Password: ";
    cin >> Password;
}

void CheckThanPasswordAndPrintResult(int Password)
{
    int Balance = 7500;
    while (true)
    {
        if (Password == 123)
        {
            cout << "Your Balance Is: " << Balance;
            return;
        }
        else
        {
            cout << "Please Try Again. \n";
            ReadPassword(Password);
        }
    }
}