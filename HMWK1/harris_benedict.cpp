//File Name: harris_benedict.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 1
//Description: Calculate the number of chocolate bars someone can eat.
//Last Changed: 8/12/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

int main()
{
    char sex;
    int age;
    double weight, height;
    double bmr = -1.0;

    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your age in years: ";
    cin >> age;

    cout << "Enter M for male, or F for female: ";
    cin >> sex;

    if (tolower(sex) == 'm')
    {
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
    }
    else if (tolower(sex) == 'f')
    {
        bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
    }
    else
    {
        cout << "You didn't enter a supported value for M/F!" << endl;
    }

    if (bmr != -1.0)
    {
        cout << "You need to eat " << bmr / 230 << " to maintain your weight." << endl;
    }
    else
    {
        cout << "Sorry, we couldn't calculate a value. Please try again and enter a supported value for M/F" << endl;
    }

    return 0;
}
