#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\n--- Basic Math Functions ---\n";

    cout << "Absolute value (abs): " << abs(num) << endl;
    cout << "Ceil (round up): " << ceil(num) << endl;
    cout << "Floor (round down): " << floor(num) << endl;
    cout << "Round: " << round(num) << endl;

    cout << "\n--- Power and Root ---\n";
    cout << "Square (pow num^2): " << pow(num, 2) << endl;
    cout << "Cube (pow num^3): " << pow(num, 3) << endl;
    cout << "Square root: " << sqrt(num) << endl;

    cout << "\n--- Other Functions ---\n";
    cout << "Log (natural log): " << log(num) << endl;
    cout << "Log10: " << log10(num) << endl;

    return 0;
}