//File Name: sphere_vol.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 1
//Description: Calculates the volume of a sphere from its radius.
//Last Changed: 8/12/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

int main() {
    double radius, volume;
    cout << "Enter the radius of a sphere." << endl;
    cin >> radius;

    volume = (4.0 / 3.0) * 3.1415 * radius * radius * radius; // Calculate radius for all three dimensions

    cout << "The volume is: " << volume << endl;

    return 0;
}
