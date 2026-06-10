#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Name;
    cout << "Please Enter Your Name: ";
    getline(cin, Name);

    short Age;
    cout << "Please Enetr Your Age: ";
    cin >> Age;

    string City;
    cout << "Please Enter The City: ";
    cin >> City;

    string Country;
    cout << "Please Enter The Country: ";
    cin >> Country;

    float MonthlySalary;
    cout << "Please Enter Monthly Salary: ";
    cin >> MonthlySalary;

    float YearlySalary = MonthlySalary * 12;

    char Gender;
    cout << "Please Enter Gender: ";
    cin >> Gender;

    bool IsMarried;
    cout << "You Are Married: ";
    cin >> IsMarried;

    cout << "\n\n******************************\n";
    cout << "Name: " << Name << ". \n";
    cout << "Age : " << Age << " Years. \n";
    cout << "City: " << City << ". \n";
    cout << "Country: " << Country << ". \n";
    cout << "Monthly Salary: " << MonthlySalary << ". \n";
    cout << "Yearly Salary: " << YearlySalary << ". \n";
    cout << "Gender: " << Gender << ". \n";
    cout << "Married: " << IsMarried << ". \n";
    cout << "******************************\n\n";
    return 0;
}