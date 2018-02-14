//
//  FactorialRecursive.cpp
//  Factorial
//
//  Created by Joseph Runser on 9/13/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include "Factorial.hpp"

int Factorial::FactorialRecursive(int n) {
    
    // Checks for a base case.
    if(n <= 1) return 1;
    return n + FactorialRecursive(n - 1);
    
}

int Factorial::FactorialIterative(int n) {
    
    int total = 0;
    if(n > 0)
        for(int i = n; i >= 1; i--)
            total = total + i;
    
    return total;
    
}
