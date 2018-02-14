//
//  BinarySearch.cpp
//  SearchingAlgorithms
//
//  Created by Joseph Runser on 9/27/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include "Search.hpp"

int Search::binarySearch(int *array, int start, int end, int key) {
    
    int mid;
    
    if(start > end) { return -1; }
    else {
        mid = (start + end) / 2;
        if(key == array[mid]) { return mid; }
        else {
            if(key < array[mid]) { return binarySearch(array, start, mid - 1, key); }
            else { return binarySearch(array, mid + 1, end, key); }
        }
    }
    
}

int Search::linearSearch(int *array, int key) {
    
    // Prefered method.
    // for(int i = 0; i < sizeOfArray + 1; i++) if(array[i] == key) return i;
    
    int i = 0;
    // Way it works because I am passing an array by reference.
    while(true) {
        if(array[i] < 0 || array[i] > 999) { return -1; }
        if(array[i] == key) { return i; }
        i++;
    }
    return -1; // If no key is found.
}
