//File Name: interest.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 3
//Description: Calculate interest accured
//Last Changed: 10/30/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

double calculateInterest(double initialBalance, double interestRate, int numMonthsInt) {
    double balance = initialBalance;
    double interest = 0.0;
    for (int i = 0; i < numMonthsInt; i++) {
        balance = balance + (balance * interestRate);
        interest += (balance * interestRate);
    }
    return interest;
}

int main() {
    string confirm;
    double initialBalance;
    double interestRate;
    int numMonthsInt;
    do {
        cout << "----------------------------------------" << endl;
        cout << "Credit Card Interest Calculator:" << endl;
        cout << "Please enter the initial balance, monthly interest rate (as a decimal fraction, e.g. enter 0.015 for 1.5%) and number of months of interest" << endl;
        cin >> initialBalance;
        cin >> interestRate;
        cin >> numMonthsInt;

        cout << "Interest accrued is $" << calculateInterest(initialBalance, interestRate, numMonthsInt) << endl;

        cout << "\nEnter 'y' to repeat, any other character to quit." << endl;

        cin >> confirm;
        cout << endl;
    } while (confirm == "y");
    return 0;
}
