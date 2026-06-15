#include <iostream>
using namespace std;

struct Employee
{
    string FirstName;
    string LastName;
    int Age;
};

int main()
{
    // Generic Pointer
    void* ptr;

    int a = 10;
    float f = 12.5;
    string name = "Mohammed";
    Employee emp = { "Mohamed", "Eladham", 27 };

    // int via void pointer
    ptr = &a;
    cout << "Int value: " << *(static_cast<int*>(ptr)) << endl;

    // float via void pointer
    ptr = &f;
    cout << "Float value: " << *(static_cast<float*>(ptr)) << endl;

    // string via void pointer
    ptr = &name;
    cout << "String value: " << *(static_cast<string*>(ptr)) << endl;

    // struct via void pointer
    ptr = &emp;

    cout << "Employee First Name: " << static_cast<Employee*>(ptr)->FirstName << endl;

    cout << "Employee Last Name: " << static_cast<Employee*>(ptr)->LastName << endl;

    cout << "Employee Age: " << static_cast<Employee*>(ptr)->Age << endl;

    return 0;
}