//File Name: clothing.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 3
//Description: Calculate clothing sizes
//Last Changed: 10/30/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

double getHatSize(double height, double weight) {
    return (weight / height) * 2.9;
}

double getJacketSize(double height, double weight, int age) {
    double jacketSize = (height * weight) / 288;
    if (age > 30) {
        for (int i = 30; i < age; i += 10) {
            jacketSize += 0.125;
        }
    }
    return jacketSize;
}

double getWaistSize(double weight, int age) {
    double waistSize = weight / 5.7;
    if (age > 28) {
        for (int i = 28; i < age; i += 2) {
            waistSize += 0.1;
        }
    }
    return waistSize;
}

int main() {
    string confirm;
    double height, weight;
    int age;
    do {
        cout << "----------------------------------------" << endl;
        cout << "Clothing Size Estimator:" << endl;
        cout << "Please enter your height(inches), weight(pounds), and age(years)" << endl;
        cin >> height >> weight >> age;

        cout << "\nHat size = " << getHatSize(height, weight) << endl;
        cout << "\nJacket size = " << getJacketSize(height, weight, age) << endl;
        cout << "\nWaist size = " << getWaistSize(weight, age) << endl;

        cout << "\nEnter 'y' to repeat, any other character to quit." << endl;

        cin >> confirm;
        cout << endl;
    } while (confirm == "y");
    return 0;
}
