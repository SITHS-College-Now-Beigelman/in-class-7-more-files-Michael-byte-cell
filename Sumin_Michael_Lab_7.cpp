//Michael Sumin
//Lab 7
//11/3/25
//Figure out how to use extra files in c++


#include <iostream>
#include <string>
#include <fstream>

using namespace std; // declare needed setup


int main() {
    ifstream inFile;
    ofstream outFile;


    inFile.open("inData.txt");
    outFile.open("outData.txt"); // open both files for program

    int num1, num2;
    char ch;
    string message; // declare variables


    inFile >> num1 >> num2;
    inFile >> ch;
    inFile >> message; // declare order of input


    outFile << "Sum of the two numbers: " << (num1 + num2) << endl; // add inputs for output

    char nextch = ch + 1;
    outFile << "Next character: " << nextch << endl; // find next variable in alphabet

    outFile << "Message: " << message << endl; // type out input message with additional "message" at start


    inFile.close();
    outFile.close(); // close files for comfortability

    return 0; // clean finish
}
