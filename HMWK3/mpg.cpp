//File Name: mpg.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 3
//Description: Calculate MPG for a car
//Last Changed: 10/30/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>
#include <string>

using namespace std;

double LPG = 0.264179;

double getMilesPerGallon(double litersUsed, double milesDriven) {
    double gallons = LPG * litersUsed;
    return milesDriven / gallons;
}

int main() {
    string confirm = "y";
    double litersUsed, milesDriven;
    do {
        cout << "----------------------------------------" << endl;
        cout << "Miles per Gallon Calculator:" << endl;
        cout << "Please enter the liters of fuel used and miles driven." << endl;
        cin >> litersUsed >> milesDriven;
        cout << "\nThis equates to " << getMilesPerGallon(litersUsed, milesDriven) << "mpg." << endl;
        cout << "\nEnter 'y' to repeat, any other character to quit." << endl;
        cin >> confirm;
        cout << endl;
    } while (confirm == "y");
    return 0;
}
