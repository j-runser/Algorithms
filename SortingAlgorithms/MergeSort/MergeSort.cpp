//
//  MegeSort.cpp
//  SortingAlgorithms
//
//  Created by Joseph Runser on 9/1/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include "MergeSort.hpp"


MergeSort::MergeSort(int *array, int low, int high) {
    this->array = array;
    this->low = low;
    this->high = high;
    Sort();
}

MergeSort::MergeSort(int *array, int low, int mid, int high) {
    MergeSort(array, low, high);
    
    Sort();
}

void MergeSort::Sort() {
    if(low < high) {
        // No need to floor because I am using integers.
        mid = (low + high) / 2;
        
        MergeSort(array, low, mid);
        MergeSort(array, (mid + 1), high);
        
        Merge();
    }
}

void MergeSort::Merge() {
    int tmp[high - low + 1];
    int i, j, k;
    
    i = low;
    k = 0;
    j = mid + 1;
    
    while(i <= mid && j <= high) {
        if(array[i] < array[j]) {
            tmp[k] = array[i];
            k++;
            i++;
        } else {
            tmp[k] = array[j];
            k++;
            j++;
        }
    }
    
    while(i <= mid) {
        tmp[k] = array[i];
        k++;
        i++;
    }
    
    while(j <= high) {
        tmp[k] = array[j];
        k++;
        j++;
    }
    
    for(i = low; i <= high; i++) {
        array[i] = tmp[i - low];
    }
}
