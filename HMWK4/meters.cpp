//File Name: meters.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 4
//Description: Convert feet and inches to meters
//Last Changed: 11/6/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iomanip>
#include <iostream>
using namespace std;

void input(int& feet, double& inches);
//Precondition:     Function is called
//Postcondition:    Prompt given to the user for input in the format FF II,
//                  where FF is integer number of feet and II is a double
//                  number of inches. feet and inches are returned as entered
//                  by the user.

void convert(int feet, double inches, double& meters);
//Preconditions:    REQUIRED CONSTANTS: INCHES_PER_FOOT, METERS_PER_FOOT
//                  Inches < 12, feet within range of values for int type
//Postconditions:   Meters assigned 0.3048 * (feet + inches/12)
//                  Observe that the centimeter requirement is met by
//                  the value of the first two decimal places of the
//                  converted feet/inches input.

void output(int feet, double inches, double meters);
//Preconditions:    The formal argument for meters fits into a double
//Postconditions:   The value of feet/inches expressed in meters
//                  (with first two decimal places representing
//                  centimeters)

int main() {
    int feet;
    double inches, meters;
    char ans;

    do {
        input(feet, inches);
        convert(feet, inches, meters);
        output(feet, inches, meters);
        cout << "Y or y continues, any other character quits "
             << endl;
        cin >> ans;
    } while ('Y' == ans || 'y' == ans);

    return 0;
}

void input(int& feet, double& inches) {
    cout << "Welcome to the Length Converter" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter feet as an integer: ";
    cin >> feet;
    cout << "Enter inches as a double: ";
    cin >> inches;
}

void convert(int feet, double inches, double& meters) {
    meters = ((feet * 12) + inches) / 39.37;
}

void output(int feet, double inches, double meters) {
    cout << "You entered " << feet << " feet, and " << inches << " inches\n"
         << endl;
    cout << "This length equates to " << std::setprecision(3) << meters << " meters\n"
         << endl;
}
