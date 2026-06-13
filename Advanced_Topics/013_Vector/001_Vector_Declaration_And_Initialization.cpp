#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Declare and initialize a vector with predefined values.
    vector<int> vNumbers = { 10, 20, 30, 40, 50 };

    // Iterate through all vector elements using index-based explanation.
    cout << "\n\nPrint vector elements with index:\n";
    for (int i = 0; i < vNumbers.size(); i++)
    {
        cout << "Index [" << i << "] = " << vNumbers[i] << endl;
    }

    // Display the total number of elements stored in the vector.
    cout << "\nVector size before push_back: " << vNumbers.size() << endl;


    // Add elements dynamically using push_back.
    vNumbers.push_back(105);
    vNumbers.push_back(99);
    vNumbers.push_back(1000);
    vNumbers.push_back(500);
    vNumbers.push_back(450);
    vNumbers.push_back(185);
    vNumbers.push_back(150);
    vNumbers.push_back(15);

    // Print updated vector with index + value.
    cout << "\n\nVector after push_back (Index + Value):\n";
    for (int i = 0; i < vNumbers.size(); i++)
    {
        cout << "Index [" << i << "] = " << vNumbers[i] << endl;
    }

    // Print new size.
    cout << "\nVector size after push_back: " << vNumbers.size() << endl;

    // Observe memory addresses of vector elements.
    cout << "\nMemory addresses of vector elements:\n";
    for (int i = 0; i < vNumbers.size(); i++)
    {
        cout << "Index [" << i << "] Address = " << &vNumbers[i] << endl;
    }

    return 0;
}