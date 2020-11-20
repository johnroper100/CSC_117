//File Name: rolodex.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 6
//Description: Phone book program
//Last Changed: 11/20/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 4;

string lookupName(string targetName, string names[], string phoneNumbers[], int MAX_SIZE);
//Precondition:     "names" and "phoneNumbers" are parallel arrays
//                  containing the names and phone numbers of a
//                  collection of contacts.
//Postcondition:    Search for targetName in "names" and return the
//                  the corresponding phone number (null if not found).

int main() {
    string names[] = {"Michael Myers",
                      "Ash Williams",
                      "Jack Torrance",
                      "Freddy Krueger"};
    string phoneNumbers[] = {"333-8000",
                             "333-2323",
                             "333-6150",
                             "333-7970"};
    string targetName, targetPhone;
    char ans;

    do {
        cout << "Enter a name to find the "
             << "corresponding phone number."
             << endl;
        getline(cin, targetName);
        targetPhone = lookupName(targetName, names, phoneNumbers, MAX_SIZE);
        if (targetPhone.length() > 0)
            cout << "The number is: "
                 << targetPhone << endl;
        else
            cout << "Name not found. "
                 << endl;
        cout << "Look up another name? (y/n)"
             << endl;
        cin >> ans;
        cin.ignore();
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

string lookupName(string targetName, string names[],
                  string phoneNumbers[], int MAX_SIZE) {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (names[i] == targetName) {
            return phoneNumbers[i];
        }
    }
    return "";
}
