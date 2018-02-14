//
//  BinarySearch.hpp
//  SearchingAlgorithms
//
//  Created by Joseph Runser on 9/27/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#ifndef Search_hpp
#define Search_hpp

#include <iostream>

using namespace std;

class Search {
    
/* Framework for Search
 public:
     static int binarySearch(int *array, int start, int end, int key);
     static int linearSearch(int *array, int key);
 
 private:
 */
    
public:
    // int key: The index in the array that is being searched for.
    // int *array: A pointer to the array that is being searched.
    //
    // return (int): It will return the array index of the first key that is
    //     found in the array. If nothing is found then it will return -1.
    //
    // Purpose: Incrementally compare each element in the array to the key.
    static int binarySearch(int *array, int start, int end, int key);
    
    // int key: The index in the array that is being searched for.
    // int *array: A pointer to the array that is being searched.
    //
    // return (int): It will return the array index of the first key that is
    //     found in the array. If nothing is found then it will return -1.
    //
    // Purpose: Incrementally compare each element in the array to the key.
    static int linearSearch(int *array, int key);
    
private:
    int ary[];
    
    void populateArray();
    void populateArray(long arrayLegth);
    
};

#endif /* Search_hpp */
