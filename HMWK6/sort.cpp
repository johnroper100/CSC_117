//File Name: sort.cpp
//Author: John Roper
//Email Address: john.roper@assumption.edu
//Assignment Number: 6
//Description: Sort the numbers
//Last Changed: 11/20/20, see https://github.com/johnroper100/CSC_117 for full changes

#include <iostream>

using namespace std;

void fillArray(int a[], int size, int& numberUsed);
//Precondition:     "size" is the declared size of the array "a".
//Postcondition:    "numberUsed" is the number of values stored in "a".
//                  a[0] through a[numberUsed - 1] have been filled with
//                  nonnegative integers read from the keyboard.

void sort(int a[], int numberUsed);
//Precondition:     "numberUsed" <= declared size of the array "a".
//                  The array elements a[0] through a[numberUsed - 1]
//                  contain values.
//Postcondition:    The values of a[0] through a[numberUsed - 1] have
//                  been rearranged so that a[0] <= a[1] <= ...
//                  <= a[numberUsed - 1] by using the Insertion sort.

void swapValues(int& v1, int& v2);
//Interchanges the values of "v1" and "v2".

const int MAX_SIZE = 10;

int main() {
    int sampleArray[MAX_SIZE], numberUsed = 0;

    cout << "-------------------------------------------------" << endl;
    cout << "This program sorts numbers from lowest to highest." << endl;

    fillArray(sampleArray, 10, numberUsed);
    sort(sampleArray, numberUsed);

    cout << endl;
    cout << "In sorted order the numbers are:" << endl;
    for (int index = 0; index < numberUsed; index++)
        cout << sampleArray[index] << " ";
    cout << endl;

    return 0;
}

void fillArray(int a[], int size, int& numberUsed) {
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
         << "Mark the end of the list with a negative number.\n";
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && (index < size)) {
        a[index] = next;
        index++;
        cin >> next;
    }

    numberUsed = index;
}

void sort(int a[], int numberUsed)
// Sorts the elements in the array "a" by using the Insertion Sort algo.
{
    int wip;
    int previous;
    for (int i = 1; i < numberUsed; i++) {
        wip = a[i];
        previous = i - 1;

        while (wip < a[previous] && previous >= 0) {
            a[previous + 1] = a[previous];
            previous -= 1;
        }

        a[previous + 1] = wip;
    }
}

void swapValues(int& v1, int& v2) {
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
