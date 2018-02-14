// Title:   LinearSearch.cpp
// Author:  Joseph Runser
// Date:    11 September 2017
// Purpose: Impliment linear search.

#include <iostream>
#include "LinearSeach.h"

using namespace std;

int LinearSearch::search(int *array, int key) {
    
    // The sizeof method returns one short of what the array actually is, as a remidy 1 is
    // added to the size of the array.
    int sizeOfArray = sizeof(array) / sizeof(int);
    
    cout << sizeOfArray << endl;
    
    // Looking for the key.
    //for(int i = 0; i < sizeOfArray + 1; i++) if(array[i] == key) return i;
    
    int i = 0;
    
    while(true) {
        if(array[i] == '\0') return -1;
        if(array[i] == key) return i;
        
        cout << "Array element " << i << " is " << array[i] << endl;
        
        i++;
    }
     
    // If no key is found.
    return -1;
    
}
