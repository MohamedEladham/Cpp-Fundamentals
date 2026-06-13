#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Save all non-empty vector elements to a file
void SaveVectorToFile(const string& fileName, const vector<string>& fileContent)
{
    // Open file in write mode
    ofstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    // Write each non-empty line to the file
    for (const string& line : fileContent)
    {
        if (!line.empty())
        {
            file << line << endl;
        }
    }
}

// Read and print file content line by line
void PrintFileContent(const string& fileName)
{
    // Open file in read mode
    ifstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    string line;

    // Read and display each line
    while (getline(file, line))
    {
        cout << line << endl;
    }
}

int main()
{
    // Store student names in memory
    vector<string> fileContent =
    {
        "Mohammed",
        "Ahmed",
        "Sayed",
        "Osama",
        "Ali",
        "Salah"
    };

    // Save vector data to file
    SaveVectorToFile("NameStudents.txt", fileContent);

    cout << endl;

    // Display saved file content
    PrintFileContent("NameStudents.txt");

    cout << endl;

    return 0;
}