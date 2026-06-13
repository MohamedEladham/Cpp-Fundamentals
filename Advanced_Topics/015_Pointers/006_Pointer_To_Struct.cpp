#include <iostream>
using namespace std;

struct Employee
{
    string Name;
    short Age;
    float Salary;
};

int main()
{
    Employee emp;

    emp.Name = "Mohammed";
    emp.Age = 26;
    emp.Salary = 2650;

    cout << "Using Object\n";
    cout << "Name   : " << emp.Name << endl;
    cout << "Age    : " << emp.Age << endl;
    cout << "Salary : " << emp.Salary << endl;

    cout << "\n====================\n";

    Employee* ptr = &emp;

    cout << "Using Pointer\n";
    cout << "Name   : " << ptr->Name << endl;
    cout << "Age    : " << ptr->Age << endl;
    cout << "Salary : " << ptr->Salary << endl;

    cout << "\n====================\n";

    cout << "Struct Address: " << ptr << endl;

    return 0;
}