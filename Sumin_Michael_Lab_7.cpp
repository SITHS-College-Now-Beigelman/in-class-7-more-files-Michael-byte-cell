//Michael Sumin
//Lab 6
//10/19/25
//Use a combinatination of all skills learned to create a fitness and nutrition tracker program.


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


int main() {
    // Step 2: Declare variables for file streams
    ifstream inFile;
    ofstream outFile;

    // Step 3: Open the input and output files
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    // Step 4: Check that files opened correctly
    if (!inFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }
    if (!outFile) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    // Step 5: Declare variables for input data
    int num1, num2;
    char ch;
    string message;

    // Step 6: Read the data from the input file
    inFile >> num1 >> num2;
    inFile >> ch;
    inFile >> message;

    // Step 7: Process and write results to the output file
    // (a) Sum of two integers
    outFile << "Sum of the two numbers: " << (num1 + num2) << endl;

    // (b) Next ASCII character
    outFile << "Next character: " << static_cast<char>(ch + 1) << endl;

    // (c) String message
    outFile << "Message: " << message << endl;

    // Step 8: Close both files
    inFile.close();
    outFile.close();

    return 0;
}
