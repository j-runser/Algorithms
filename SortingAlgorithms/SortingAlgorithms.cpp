/* Author:       Joe Runser
 * Date Written: 30 August 2017
 * Date Edited:  30 August 2017
 * Purpose:      Select a sorting algorithm to demonstrate the execution of it on a randomly 
 *               generated array.
 * File:         InsertionSort.cpp
 */

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include "InsertionSort.hpp"
#include "MergeSort.hpp"

using namespace std;

int main() {
    
    const int ARRAY_SIZE = 500000;
    
    int upperBound = 1000;
    
    int unsortedArray [ARRAY_SIZE];
    int sortedArray [ARRAY_SIZE];
    
    int userInput;
    
    clock_t myClock;
    
    cout << endl << "1. Insertion Sort" << endl << "2. Merge Sort" << endl << endl;
    cout << "Please select the desired sorting method: ";
    cin >> userInput;
    
    srand(time(NULL));
    
    for(int i = 0; i < ARRAY_SIZE; i++) {
        unsortedArray[i] = rand() % upperBound;
        sortedArray[i] = unsortedArray[i];
    }
    
    switch(userInput) {
        case 1:
            cout << "Sorting with Insertion Sort." << endl;
            myClock = clock();
            InsertionSort(sortedArray, ARRAY_SIZE);
            myClock = clock() - myClock;
            break;
        case 2:
            cout << "Sorting with Merge Sort." << endl;
            myClock = clock();
            MergeSort(sortedArray, 0, ARRAY_SIZE);
            myClock = clock() - myClock;
            break;
        default:
            cout << "Invalid input." << endl;
            return 0;
    }
    
    // unsorted output
    cout << endl << "Unsorted: ";
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if((i % 20) == 0) {
            cout << endl;
        }
        cout << setw(4) << unsortedArray[i];
    }
    
    // sorted output
    cout << endl << endl << "Sorted: ";
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if((i % 20) == 0) {
            cout << endl;
        }
        cout << setw(4) << sortedArray[i];
    }

    cout << endl << "Sorting time: " << myClock << endl;
    
    return 0;
    
}
