#include <iostream>
using namespace std;

int main()
{
    int numOfStudents;

    cout << "Enter number of students: ";
    cin >> numOfStudents;

    // Dynamic array allocation
    float* grades = new float[numOfStudents];

    cout << "\nEnter grades:\n";
    for (int i = 0; i < numOfStudents; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> grades[i];
    }

    cout << "\nStored grades:\n";
    for (int i = 0; i < numOfStudents; i++)
    {
        cout << "Student " << i + 1 << ": " << grades[i] << endl;
        cout << "Address       : " << (grades + i) << endl;
    }

    // Release Memory
    delete[] grades;
    grades = nullptr;

    return 0;
}