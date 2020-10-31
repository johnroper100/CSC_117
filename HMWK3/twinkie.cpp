//File Name: twinkie.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 3
//Description: Simulate a vending machine
//Last Changed: 10/30/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>
#include <string>

using namespace std;

int main() {
    string coin = "";
    double insertedAmt;
    do {
        cout << "----------------------------------------" << endl;
        cout << "A deep-fried twinkie costs $3.50" << endl;
        cout << "Please insert a coin: (n)ickle, (d)ime, (q)uarter, or (D)ollar." << endl;
        cout << "You have so far inserted $" << insertedAmt << endl;
        cout << "Please identify next coin entered: ";
        cin >> coin;
        if (coin == "n") {
            insertedAmt += 0.05;
        } else if (coin == "d") {
            insertedAmt += 0.1;
        } else if (coin == "q") {
            insertedAmt += 0.25;
        } else if (coin == "D") {
            insertedAmt += 1.0;
        }
    } while (insertedAmt < 3.50);
    cout << "\nEnjoy your deep-fried twinkie.";
    if (insertedAmt > 3.50) {
        cout << " Your change is $" << insertedAmt - 3.50 << endl;
    }
    return 0;
}
