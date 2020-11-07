//File Name: time.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 4
//Description: Convert between time formats
//Last Changed: 11/6/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>
using namespace std;

void input(int& hours24, int& minutes);
//Precondition:     This function is called with arguments capable of
//                  being assigned.
//Postcondition:    The user is prompted for time in 24-hour format:
//                  HH:MM, where 0 <= HH < 24, 0 <= MM < 60.
//                  hours is set to HH, minutes is set to MM.

void convert(int& hours, char& AMPM);
//Precondition:     0 <= hours < 24,
//Postcondition:    If hours > 12, then in the afternoon/evening
//                  so hours is replaced by hours - 12, and
//                  AMPM is set to 'P'
//                  else if 12 == hours, then noon time,
//                  so hours is not changed, and
//                  AMPM is set to 'P',
//                  else if 0 == hours, then midnight,
//                  so hours is replaced by hours + 12, and
//                  AMPM = 'A'
//                  else must be morning
//                  so hours is not changed, and
//                  AMPM is set to 'A'

void output(int hours, int minutes, char AMPM);
//Precondition:     0 < hours <= 12, 0 <= minutes < 60,
//                  AMPM == 'P' or AMPM == 'A'
//Postconditions:   Time is displayed in the format
//                  HH:MM AM or HH:MM PM

int main() {
    int hours, minutes;
    char AMPM, ans;
    do {
        input(hours, minutes);
        convert(hours, AMPM);
        output(hours, minutes, AMPM);
        cout << "Enter Y or y to continue,"
             << " anything else quits."
             << endl;
        cin >> ans;
    } while ('Y' == ans || 'y' == ans);
    return 0;
}

void input(int& hours24, int& minutes) {
    cout << "Enter 24 hour time in the format HH:MM" << endl;
    scanf("%02d:%02d", &hours24, &minutes);
}

void convert(int& hours, char& AMPM) {
    AMPM = 'A';
    if (hours > 12) {
        hours = hours - 12;
        AMPM = 'P';
    }
}

void output(int hours, int minutes, char AMPM) {
    cout << "Time in 12 hour format:" << endl;
    cout << hours << ":" << minutes << " " << AMPM << "M" << endl;
}
