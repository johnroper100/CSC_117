//File Name: base.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 1
//Description: Find when C and F temps are the same
//Last Changed: 8/12/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

int main() {
    int cel = 100;
    int far;
    while (cel != far) {
        far = ((9*cel)/5)+32; // convert Celsius to Fahrenheit
        cel--;
    }
    cout << cel << far << endl;
    return 0;
}
