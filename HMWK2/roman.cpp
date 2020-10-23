//File Name: roman.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 2
//Description: Convert arabic number into roman numberals
//Last Changed: 10/23/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string shouldContiue = "y";
    int arabicValue;
    int digit;
    string romanValue;

    while (shouldContiue == "y")
    {
        cout << "Please enter a whole value between 1000 and 3000: ";
        cin >> arabicValue;

        if (arabicValue >= 1000 && arabicValue <= 3000)
        {
            digit = arabicValue / 1000;
            romanValue = "";

            digit = (arabicValue / 100) % 10;
            romanValue += "";

            digit = (arabicValue / 10) % 10;
            romanValue += "";

            digit = arabicValue % 10;
            romanValue += "";

            cout << "\nThe Roman equivalent of that value is: " << romanValue << endl;
        }
        else
        {
            cout << "\nYou must enter a vlue in the correct range!" << endl;
        }

        cout << "\nWould you like to convert another value (y/n)? ";
        cin >> shouldContiue;
    }
    return 0;
}
