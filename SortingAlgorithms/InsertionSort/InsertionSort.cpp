#include "InsertionSort.hpp"

InsertionSort::InsertionSort(int *array, int arraySize) {
    this->array = array;
    this->arraySize = arraySize;
    
    Sort();
}

void InsertionSort::Sort() {
    int i, j, key;
    
    for(j = 2; j <= (arraySize - 0); j++) {
        key = array[j];
        i = j - 1;
        while(i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}
