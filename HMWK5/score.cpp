//File Name: score.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 5
//Description: Sample program
//Last Changed: 11/13/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <cstdlib>   // for exit()
#include <fstream>   // for files
#include <iostream>  // for streams
#include <string>
using namespace std;

void calcScore(ifstream& input, ofstream& output);
//Precondition:     Input and output file stream parameters are valid
//                  and the input file stream data is formatted as
//                  defined above.
//Postcondition:    Output file produced and contains records identical
//                  to input file except additional field added (score
//                  average)

int main() {
    // Open both files, the first for input and second for output.  Also
    // display error message if files cannot be opened.
    // ENTER YOUR CODE HERE

    ifstream inputfile;
    inputfile.open("scores.dat");
    if (inputfile.fail()) {
        exit(1);
    }

    ofstream outputfile;
    outputfile.open("scores-output.dat");
    if (outputfile.fail()) {
        exit(1);
    }

    // Copy records and include score average
    calcScore(inputfile, outputfile);

    cout << endl
         << "The files have been processed." << endl;
    return 0;
}

void calcScore(ifstream& input, ofstream& output) {
    string firstName;
    string lastName;
    float scoreTotal = 0.0;
    int currentScore;

    while (!input.eof()) {
        scoreTotal = 0.0;
        input >> firstName;
        output << firstName << " ";
        input >> lastName;
        output << lastName << " ";

        for (int i = 0; i < 10; i++) {
            input >> currentScore;
            scoreTotal += currentScore;
            output << currentScore << " ";
        }

        output << (int)(scoreTotal / 10.0) << "\n";
    }

    output.close();
    input.close();
}
