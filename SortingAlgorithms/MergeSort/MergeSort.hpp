//
//  MegeSort.hpp
//  SortingAlgorithms
//
//  Created by Joseph Runser on 9/1/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

class MergeSort {
public:
    MergeSort(int *array, int low, int high);
    MergeSort(int *array, int low, int mid, int high);
    
private:
    int *array;
    int low, mid, high;
    
    void Sort();
    void Merge();
};

#endif /* MegeSort_hpp */
