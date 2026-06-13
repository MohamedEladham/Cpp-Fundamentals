#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function: Reads and displays file content line by line
// Concept: File Input Stream (ifstream) + getline()

void PrintFileContent(const string& fileName)
{
    // Open file in input (read) mode
    // ifstream = input file stream used for reading files
    ifstream file(fileName, ios::in);

    // Check if file was opened successfully
    if (!file.is_open())
    {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    string line;

    // Read file line by line until end of file
    // getline reads an entire line including spaces
    while (getline(file, line))
    {
        // Print current line to console
        cout << line << endl;
    }

    // File is automatically closed when it goes out of scope (RAII)
}

int main()
{
    // Call function to display file content
    PrintFileContent("User_Informations.txt");

    return 0;
}