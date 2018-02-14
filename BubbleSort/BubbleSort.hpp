//
//  BubbleSort.hpp
//  BubbleSort
//
//  Created by Joseph Runser on 10/30/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

class BubbleSort {
private:
    int *ary;
    int arySize;
    
    void flip(int indA, int indB);
    
public:
    BubbleSort(int *ary, int arySize);
};

#endif /* BubbleSort_hpp */
