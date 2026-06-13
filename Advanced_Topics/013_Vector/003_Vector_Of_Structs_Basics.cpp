#include<iostream>
#include<vector>
using namespace std;

// Employee structure to store basic employee data
struct stEmployee
{
    string FirstName;
    string LastName;
    float Salary;
};

int main()
{
    // Vector to store multiple employees
    vector<stEmployee> vEmployees;

    // Temporary object used to fill vector
    stEmployee TempEmployee;

    // Add first employee
    TempEmployee.FirstName = "Mohammed";
    TempEmployee.LastName = "Eladham";
    TempEmployee.Salary = 5450.50;
    vEmployees.push_back(TempEmployee);

    // Add second employee
    TempEmployee.FirstName = "Ahmed";
    TempEmployee.LastName = "Khaled";
    TempEmployee.Salary = 2500.90;
    vEmployees.push_back(TempEmployee);

    // Add third employee
    TempEmployee.FirstName = "Omare";
    TempEmployee.LastName = "Mohammed";
    TempEmployee.Salary = 2700.91;
    vEmployees.push_back(TempEmployee);

    // Print all employees data
    for (stEmployee& Employee : vEmployees)
    {
        cout << "First Name: " << Employee.FirstName << endl;
        cout << "Last Name : " << Employee.LastName << endl;
        cout << "Salary    : " << Employee.Salary << endl;
        cout << endl;
    }

    return 0;
}