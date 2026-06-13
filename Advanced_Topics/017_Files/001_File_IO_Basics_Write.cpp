#include <iostream>
#include <fstream>
using namespace std;

// Writes predefined data into a file
void WriteDataToFile(const string& fileName)
{
    ofstream myFile(fileName, ios::out); // Open file in write mode

    if (!myFile)
    {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    // Writing data to file
    myFile << "Hello, World.\n";
    myFile << "My Name Is Mohammed Eladham.\n";
    myFile << "I am 27 Years Old.\n";
    myFile << "I love Programming.\n";

    // File will close automatically (RAII)
}

int main()
{
    WriteDataToFile("MyFile.txt");
    return 0;
}