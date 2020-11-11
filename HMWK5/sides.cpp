//File Name: sides.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 6
//Description: Get the largest and smallest numbers out of a file
//Last Changed: 11/10/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <cstdlib>   // for exit
#include <fstream>   // for files
#include <iostream>  // for streams
using namespace std;

void getInputFilename(char fileName[]);
//Precondition:     Parameter can be assigned a value.
//Postcondition:    User prompted for name of input file.  Name assigned
//                  to "fileName" parameter.

void processData(char fileName[], ifstream& inputfile, int& smallest, int& largest);
//Precondition:     Input file stream parameter is valid.
//Postcondition:    The input file "inputfile" is checked to ensure it
//                  can be opened, and if so, is read to determine
//                  and assign appropriate values to "smallest" and
//                  "largest" parameters, the file is then closed.

void outputResults(int smallest, int largest);
//Precondition:     Parameters are valid.
//Postcondition:    The parameters "smallest" and "largest" are displayed
//                  along with appropriate labels.

const int MAX_FILE_NAME_LENGTH = 30;

int main() {
    char fileName[MAX_FILE_NAME_LENGTH + 1];
    int smallest;
    int largest;

    ifstream infile;             // create filestream object
    getInputFilename(fileName);  // get name of input file
    infile.open(fileName);       // associate file with filestream
    processData(fileName, infile, smallest, largest);
    outputResults(smallest, largest);

    return 0;
}

void getInputFilename(char fileName[]) {
    cout << "Please enter a file name (file name length is limited to a maximum of 30 characters: ";
    cin >> fileName;
}

void processData(char fileName[], ifstream& inputfile, int& smallest, int& largest) {
    if (!inputfile.fail()) {
        smallest = NULL;
        largest = NULL;
        int current;
        while (inputfile.good()) {
            inputfile >> current;
            if (smallest == NULL || current < smallest) {
                smallest = current;
            } else if (largest == NULL || current > largest) {
                largest = current;
            }
        }
    } else {
        cout << "Can not open the file named: " << fileName << endl;
        cout << "Now discontinuing program execution." << endl;
        exit(1);
    }
}

void outputResults(int smallest, int largest) {
    cout << "The smallest value in the file is: " << smallest << endl;
    cout << "and the largest value is: " << largest << endl;
}
