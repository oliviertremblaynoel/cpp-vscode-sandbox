#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ofstream outputFile("example.txt");
    if (outputFile.is_open()) {
        cout << "writing..." << endl;
        outputFile << "Hello, World!" << endl;
        outputFile << 42 << endl;
        outputFile.close();
    } else {
        cout << "Error opening the file for writing." << endl;
        return 1;
    }

    ifstream inputFile("example.txt");
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    return 0;
}
