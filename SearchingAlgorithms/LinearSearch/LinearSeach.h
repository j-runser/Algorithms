#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <vector>

class LinearSearch {

public:
    // Author:  Joe Runser
    // Date:    11 September 2017
    //
    // int key: The index in the array that is being searched for.
    // int *array: A pointer to the array that is being searched.
    //
    // return (int): It will return the array index of the first key that is found in the array. If
    // nothing is found then it will return -1.
    //
    // Purpose: Incrementally compare each element in the array to the key.
    static int search(int *array, int key);
    
private:
    unsigned long arraySize;
    
};

#endif
