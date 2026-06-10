#include <iostream>
using namespace std;

float AverageGrades(float Grades[3])
{
    float AverageOfGrades = (Grades[0] + Grades[1] + Grades[2]) / 3;
    return AverageOfGrades;
}

int main()
{
    float Grades[3];

    cout << "Please Enter Grade1: ";
    cin >> Grades[0];

    cout << "Please Enter Grade2: ";
    cin >> Grades[1];

    cout << "Please Enter Grade3: ";
    cin >> Grades[2];

    cout << "The Average Of Grades Is = ";
    cout << AverageGrades(Grades) << endl;

    return 0;
}