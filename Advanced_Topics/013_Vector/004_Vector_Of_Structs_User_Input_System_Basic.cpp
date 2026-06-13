#include<iostream>
#include<vector>
#include <limits>
using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    float Salary;
};

// Read single employee data from user
void ReadEmployee(stEmployee& Employee)
{
    cout << "\n** Enter Employee Information **\n";

    cout << "Enter First Name: ";
    cin >> Employee.FirstName;

    cout << "Enter Last Name: ";
    cin >> Employee.LastName;

    cout << "Enter Salary: ";
    cin >> Employee.Salary;
}

// Read multiple employees into vector
void ReadEmployees(vector<stEmployee>& vEmployees)
{
    char AddMore = 'Y';
    stEmployee TempEmployee;

    while (AddMore == 'Y' || AddMore == 'y')
    {
        ReadEmployee(TempEmployee);
        vEmployees.push_back(TempEmployee);

        cout << "\nDo You Want To Add More Employees? (Y/N): ";
        cin >> AddMore;
    }
}

// Print all employees
void PrintEmployees(const vector<stEmployee>& vEmployees)
{
    cout << "\n\n===== Employees List =====\n";

    for (const stEmployee& Employee : vEmployees)
    {
        cout << "First Name: " << Employee.FirstName << endl;
        cout << "Last Name : " << Employee.LastName << endl;
        cout << "Salary    : " << Employee.Salary << endl;
        cout << "------------------------\n";
    }
}

int main()
{
    vector<stEmployee> vEmployees;

    ReadEmployees(vEmployees);
    PrintEmployees(vEmployees);

    return 0;
}