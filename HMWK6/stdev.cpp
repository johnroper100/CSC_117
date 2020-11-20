//File Name: stdev.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 6
//Description: Calculate standard deviation
//Last Changed: 11/20/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <cmath>
#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

void fillArray(double a[], int MAX_SIZE);
//Precondition:     "MAX_SIZE" is the declared size of the array "a".
//Postcondition:    Values entered by the user are stored in "a".
//                  a[0] through a[MAX_SIZE - 1] have been filled with
//                  nonnegative integers read from the keyboard.

double stdDev(double s[], int size);
//Precondition:     "size" <= declared size of the array argument "s"
//Postcondition:    Compute and return the standard deviation of
//                  the elements in array "s" of size "size".

double average(double s[], int size);
//Precondition:     "size" <= declared size of the array argument "s"
//Postcondition:    Compute and return the mean of
//                  the elements in array "s" of size "size".

int main() {
    double s[MAX_SIZE];
    double stdDeviation;
    char ans;

    do {
        fillArray(s, MAX_SIZE);
        stdDeviation = stdDev(s, MAX_SIZE);

        cout << endl
             << "The Standard Deviation is: " << stdDeviation
             << endl
             << endl;

        cout << "Enter Y or y to continue.  Any other input quits." << endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

double stdDev(double s[], int size) {
    double initialMean = average(s, size);
    double workingVals[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        workingVals[i] = pow(s[i] - initialMean, 2);
    }
    return sqrt(average(workingVals, size));
}

double average(double s[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += s[i];
    }
    return total / size;
}

void fillArray(double s[], int MAX_SIZE) {
    cout << "--------------------------------------------------" << endl
         << "Please enter " << MAX_SIZE << " values, " << endl
         << "each value separated by white space and terminated" << endl
         << "with <cr>. I will then compute the standard deviation."
         << endl
         << endl;

    // input values into array "s"
    for (int i = 0; i < MAX_SIZE; i++)
        cin >> s[i];
}
