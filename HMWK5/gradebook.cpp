//File Name: score.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 5
//Description: Calculate a gradebook
//Last Changed: 11/13/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <cstdlib>   // for exit()
#include <fstream>   // for files
#include <iostream>  // for streams
#include <sstream>
#include <string>
using namespace std;

void calcScore(ifstream& input, ofstream& output);
//Precondition:     Input and output file stream parameters are valid
//                  and the input file stream data is formatted as
//                  defined above.
//Postcondition:    Output file produced and contains records identical
//                  to input file except additional field added (score
//                  average)

void copy(ifstream& input, ofstream& output);
//Precondition:     Input and output file stream parameters are valid.
//Postcondition:    Output file is a copy of the input file.
//Remarks:          Used to implement Enhancement #c.

int main() {
    ifstream inputfile;
    ofstream outputfile;

    inputfile.open("gradebook-scores.dat");
    if (inputfile.fail()) {
        cout << "Can not open the input file" << endl;
        cout << "Now discontinuing program execution" << endl;
        exit(1);
    }

    outputfile.open("gradebook-scores-output.dat");
    if (outputfile.fail()) {
        cout << "Can not open the output file" << endl;
        cout << "Now discontinuing program execution" << endl;
        exit(1);
    }

    // Copy records and include score average
    calcScore(inputfile, outputfile);

    inputfile.close();
    outputfile.close();

    inputfile.open("gradebook-scores-output.dat");
    if (inputfile.fail()) {
        cout << "Can not open the input file" << endl;
        cout << "Now discontinuing program execution" << endl;
        exit(1);
    }

    outputfile.open("gradebook-scores.dat");
    if (outputfile.fail()) {
        cout << "Can not open the output file" << endl;
        cout << "Now discontinuing program execution" << endl;
        exit(1);
    }

    copy(inputfile, outputfile);

    inputfile.close();
    outputfile.close();

    cout << endl
         << "The files have been processed." << endl;
    return 0;
}

void calcScore(ifstream& input, ofstream& output) {
    string firstName;
    string lastName;
    float scoreTotal = 0.0;
    int currentScore;
    string inputString;
    while (getline(input, inputString)) {
        istringstream ss(inputString);
        scoreTotal = 0.0;

        ss >> firstName;
        output << firstName << " ";
        ss >> lastName;
        output << lastName << " ";

        while (ss >> currentScore) {
            scoreTotal += currentScore;
            output << currentScore << " ";
        }

        output << scoreTotal / 10.0 << "\n";
    }
}

void copy(ifstream& input, ofstream& output) {
    string inputString;
    while (getline(input, inputString)) {
        output << inputString << "\n";
    }
}
