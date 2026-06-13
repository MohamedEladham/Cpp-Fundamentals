#include <iostream>
#include <fstream>
using namespace std;

// Append using standard append mode
void AppendDataToFile(const string& fileName)
{
    ofstream file(fileName, ios::app);

    if (!file.is_open())
        return;

    file << "Hi, Sayed\n";
    file << "Hi, Mostafa\n";
    file << "*******************************\n\n";
}

int main()
{
    AppendDataToFile("SayHello.txt");
    return 0;
}