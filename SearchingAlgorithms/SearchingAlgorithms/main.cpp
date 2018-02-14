// Name:    main.cpp
// Author:  Joseph Runser
// Date:    11 September 2017
// Purpose: Present different sorting algorithms.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Search.hpp"
#include "MergeSort.hpp"

using namespace std;

int main() {
    
    const int ARRAY_SIZE = 100;  // Size of the array.
    const int UPPER_BOUND = 1000; // Maximum size for random integers.
    
    int array[ARRAY_SIZE];
    
    int sortType;
    int key;
    
    // Seeds the random numbers in time, makeing them more random.
    srand(time(NULL));
    
    // Populate the array.
    for(int i = 0; i < ARRAY_SIZE; i++) array[i] = rand() % UPPER_BOUND;
    
    // Display the elements in the array.
    cout << endl << "The array: ";
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if((i % 20) == 0) cout << endl;
        cout << array[i] << " ";
    }
    cout << endl;
    
    // The kind of sort to use
    cout << endl << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl << endl;
    cout << "Please select the type of search to use: ";
    cin >> sortType;
    
    // Get the key from the user.
    cout << "Please slecect a number to search for: ";
    cin >> key;
    
    // Execute the search. Note that a change in namespace is requred to run the search.
    int index;
    cout << endl;
    
    switch (sortType) {
        case 1: // Linear Search
            cout << "Using Linear Search, ";
            index = Search::linearSearch(array, key);
            break;
        case 2: // Binary Search
            MergeSort::MergeSort(array, 0, ARRAY_SIZE);
            // Display the elements in the array.
            cout << endl << "The sorted array: ";
            for(int i = 0; i < ARRAY_SIZE; i++) {
                if((i % 20) == 0) cout << endl;
                cout << array[i] << " ";
            }
            cout << endl << endl << "Using Binary Serach, " << endl;
            index  = Search::binarySearch(array, 0, ARRAY_SIZE, key);
            break;
        default: // No search is found.
            cout << "Error: There is no search type";
            return 1;
    }
    
    // Output for element is not found.
    if(index == -1) { cout << "the number was not found." << endl; }
    // Ouptut for element is found.
    else { cout << "the element is in index: " << index << "." << endl; }
    
    return 0;
    
}

void DisplayArray() {
    
}
