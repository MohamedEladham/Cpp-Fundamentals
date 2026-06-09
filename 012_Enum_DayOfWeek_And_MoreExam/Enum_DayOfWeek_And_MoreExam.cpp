#include <iostream>
using namespace std;

enum enColor { Red = 100, Green = 300, Yellow = 500, Blue = 700 };
enum enGender { Male = 1, Female = 2 };

enum enDays
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    // Note: -- The Default Value Of Enum Start By 0 --

    enColor color = Green;
    cout << "Green Number: " << color << endl;

    cout << "\n-------------------------------------\n";

    enGender grndr = Male;
    cout << "Gnder Number: " << grndr << endl;

    cout << "\n-------------------------------------\n";

    enDays Today = Friday;
    cout << "Today Number: " << Today << endl;

    return 0;
}