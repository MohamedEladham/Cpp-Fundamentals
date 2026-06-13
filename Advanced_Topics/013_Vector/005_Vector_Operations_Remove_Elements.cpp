#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Create a vector and initialize it with values
    vector<int> vNumbers = { 10, 20, 30, 40, 50 };

    /*
    ========================================================
    STEP 1: Display initial vector state
    ========================================================
    */
    cout << "\nInitial Vector Elements:\n";
    for (int Number : vNumbers)
    {
        cout << Number << " ";
    }

    cout << "\nSize: " << vNumbers.size() << endl;

    /*
    ========================================================
    STEP 2: Remove last element using pop_back()
    ========================================================
    */
    vNumbers.pop_back();

    cout << "\nAfter pop_back():\n";
    for (int Number : vNumbers)
    {
        cout << Number << " ";
    }

    cout << "\nSize: " << vNumbers.size() << endl;

    /*
    ========================================================
    STEP 3: Check if vector is empty
    ========================================================
    */
    if (!vNumbers.empty())
    {
        cout << "\nVector is NOT empty\n";
    }
    else
    {
        cout << "\nVector is empty\n";
    }

    /*
    ========================================================
    STEP 4: Remove all elements using clear()
    ========================================================
    */
    vNumbers.clear();

    cout << "\nAfter clear():\n";

    if (vNumbers.empty())
    {
        cout << "Vector is empty now\n";
    }

    cout << "Size: " << vNumbers.size() << endl;

    return 0;
}