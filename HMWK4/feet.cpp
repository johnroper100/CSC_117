//File Name: feet.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 4
//Description: Convert meters to feet and inches
//Last Changed: 11/6/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iomanip>
#include <iostream>
using namespace std;

void input(double& meters);
//Precondition:     function is called
//Postcondition:    Prompt given to the user for input of a number of
//                  meters as a double. Input of a double for meters
//                  has been accepted.

void convert(int& feet, double& inches, double meters);
//Preconditions:    REQUIRED CONSTANTS: INCHES_PER_FOOT, METERS_PER_FOOT
//Postconditions:   Feet is assigned the integer part of meters (after
//                  conversion to feet units) inches is assigned the
//                  fractional part of feet (after conversion to inch units)

void output(int feet, double inches, double meters);
//Preconditions:    function is called. The formal argument for meters
//                  fits into a double.
//Postconditions:   The equivalent value of meters/centimeters expressed
//                  as feet and inches (with two decimal places)

int main() {
    int feet;
    double inches, meters;
    char ans;
    do {
        input(meters);
        convert(feet, inches, meters);
        output(feet, inches, meters);
        cout << "Y or y continues, any other character quits "
             << endl;
        cin >> ans;
    } while ('Y' == ans || 'y' == ans);
    return 0;
}

void input(double& meters) {
    cout << "Welcome to the Length Converter" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter a number of meters as a double: " << endl;
    cin >> meters;
}

void convert(int& feet, double& inches, double meters) {
    inches = meters * 39.37;
    feet = inches / 12;
    inches = inches - (12 * feet);
}

void output(int feet, double inches, double meters) {
    cout << "You entered " << meters << " meters\n"
         << endl;
    cout << "This length equates to " << std::setprecision(3) << feet << " feet and " << inches << " inches\n"
         << endl;
}
