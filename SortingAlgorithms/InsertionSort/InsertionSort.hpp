#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

class InsertionSort {
public:
    InsertionSort(int *array, int arraySize);
    
private:
    int *array;
    int arraySize;
    
    void Sort();
};

#endif