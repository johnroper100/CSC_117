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
            switch (digit) // Switch values based on the table at https://roman-numerals.info/
            {
            case 1:
                romanValue = "M";
                break;
            case 2:
                romanValue = "MM";
                break;
            case 3:
                romanValue = "MMM";
                break;
            default:
                romanValue = "";
            }

            digit = (arabicValue / 100) % 10;
            switch (digit)
            {
            case 1:
                romanValue += "C";
                break;
            case 2:
                romanValue += "CC";
                break;
            case 3:
                romanValue += "CCC";
                break;
            case 4:
                romanValue += "CD";
                break;
            case 5:
                romanValue += "D";
                break;
            case 6:
                romanValue += "DC";
                break;
            case 7:
                romanValue += "DCC";
                break;
            case 8:
                romanValue += "DCCC";
                break;
            case 9:
                romanValue += "CM";
                break;
            default:
                romanValue += "";
            }

            digit = (arabicValue / 10) % 10;
            switch (digit)
            {
            case 1:
                romanValue += "X";
                break;
            case 2:
                romanValue += "XX";
                break;
            case 3:
                romanValue += "XXX";
                break;
            case 4:
                romanValue += "XL";
                break;
            case 5:
                romanValue += "L";
                break;
            case 6:
                romanValue += "LX";
                break;
            case 7:
                romanValue += "LXX";
                break;
            case 8:
                romanValue += "LXXX";
                break;
            case 9:
                romanValue += "XC";
                break;
            default:
                romanValue += "";
            }

            digit = arabicValue % 10;
            switch (digit)
            {
            case 1:
                romanValue += "I";
                break;
            case 2:
                romanValue += "II";
                break;
            case 3:
                romanValue += "III";
                break;
            case 4:
                romanValue += "IV";
                break;
            case 5:
                romanValue += "V";
                break;
            case 6:
                romanValue += "VI";
                break;
            case 7:
                romanValue += "VII";
                break;
            case 8:
                romanValue += "VIII";
                break;
            case 9:
                romanValue += "IX";
                break;
            default:
                romanValue += "";
            }

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
