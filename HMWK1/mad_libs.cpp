//File Name: mad_libs.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 1
//Description: A computerized game of mad libs.
//Last Changed: 8/12/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>
#include <string>

using namespace std;

int main() {
    string instructorName, playerName, food, number, adjective, color, animal;

    cout << "MAD LIBS!\nWelcome, what's your name? ";

    getline(cin, playerName); // Using getline here so as to support multiple-word responses

    cout << "What's your professor's name? ";

    getline(cin, instructorName);

    cout << "Do you have a favorite food? Write it here: ";

    getline(cin, food);

    cout << "Pick a number in the range of 100-120: ";

    getline(cin, number);

    cout << "My favorite adjective is fantabulous, whats yours? Write it here: ";

    getline(cin, adjective);

    cout << "Roses are red, violets are blue, I know you'll tell me your favorite color, oh yes I do! What is it? ";

    getline(cin, color);

    cout << "Whats your favorite animal? ";

    getline(cin, animal);

    cout << "\nDear Prof. " << instructorName << ",\n\n";
    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ", which made me turn "
         << color << " and extremely ill. I came down with a fever of " << number << "."
         << "Next, my " << adjective << " pet " << animal
         << " must have smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely,\n"
         << playerName << endl;
    return 0;
}
