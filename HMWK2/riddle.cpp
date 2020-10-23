//File Name: riddle.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 2
//Description: Solve the Riddler's riddle
//Last Changed: 10/23/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

int main()
{
    for (int ones = 0; ones < 10; ones++)
    {
        for (int tens = 0; tens < 10; tens++)
        {
            for (int hundreds = 0; hundreds < 10; hundreds++)
            {
                for (int thousands = 0; thousands < 10; thousands++)
                {
                    if ((thousands != hundreds && thousands != tens && thousands != ones) && (hundreds != tens && hundreds != ones) && (tens != ones))
                    {
                        if ((tens * 3) == thousands)
                        {
                            if (ones % 2 != 0)
                            {
                                if (ones + tens + hundreds + thousands == 27)
                                {
                                    cout << "The address is " << thousands << hundreds << tens << ones << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
