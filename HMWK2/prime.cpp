//File Name: prime.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 2
//Description: Calculate all prime numbers from 3-100
//Last Changed: 10/23/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

int main() {
    cout << "The following numbers in the range 1-100 are prime." << endl;
    bool isPrime = true;
    for (int i = 3; i <= 100; i++) {
        isPrime = true;
        for (int y = 2; y < i; y++) {
            if (i % y == 0) { // If the number evenly divides it cannot be prime
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << i << " is a prime number." << endl;
        }
    }
    return 0;
}
