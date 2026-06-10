#include <iostream>
using namespace std;
int main()
{
    string Name = "Mohamed Eladham";
    short Age = 27;
    string City = "Mansoura" , Country = "Egypt";
    float MonthlySalary = 6000;
    float YearlySalary = MonthlySalary * 12;
    char Gender = 'M';
    bool Married = false;

    cout << "\n\n*********************************\n";

    cout << "Name: " << Name << "\n";
    cout << "Age : " << Age << " years \n";
    cout << "City: " << City << "\n";
    cout << "Country: " << Country << "\n";
    cout << "Monthly Salary: " << MonthlySalary << "\n";
    cout << "Yearly Salary: " << YearlySalary << "\n";
    cout << "Gender: " << Gender << "\n";
    cout << "Married: " << Married << "\n";

    cout << "*********************************\n\n";
    cout << "---------------------------------------------\n\n";
    short Num1 = 10, Num2 = 20, Num3 = 30, Sum = Num1 + Num2 + Num3;
    cout << Num1 << " + \n";
    cout << Num2 << " + \n";
    cout << Num3 << "\n";
    cout << "************************\n\n";
    cout << "Total = " << Sum <<endl;
    cout << "\n---------------------------------------------\n\n";
    short Age1 = 25, After = 5;
    cout << "After " << After << " Years You Will Be " << Age1 + After << " Years old. \n\n";
    return 0;
}