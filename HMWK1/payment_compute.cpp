//File Name: payment_compute.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 1
//Description: Compute an employee's pay.
//Last Changed: 8/13/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

int main() {
    char contLoop = 'y';
    int numDependants;
    double hoursWorked, payDue;
    do {
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        cout << "Enter number of dependants: ";
        cin >> numDependants;

        if (hoursWorked > 40) { // Calculate overtime (anything over 40 hours)
            payDue = 16.78 * 40;
            payDue += (16.78 * 1.5) * (hoursWorked - 40);
        } else {
            payDue = 16.78 * hoursWorked;
        }
        if (numDependants >= 3) {
            payDue -= 35; // Money for additional dependants
        }

        payDue -= 10; // Union dues
        payDue -= (payDue * 6 / 100) + (payDue * 14 / 100) + (payDue * 5 / 100); // Tax and social security percentages

        cout << "Net Pay: " << payDue << endl;

        cout << "Repeat for another employee? Type Y if so, or type anything else to quit: ";
        cin >> contLoop;
    } while (tolower(contLoop) == 'y'); // allow for multiple employees
    return 0;
}
