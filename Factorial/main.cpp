//
//  main.cpp
//  Factorial
//
//  Created by Joseph Runser on 9/13/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include <iostream>
#include "Factorial.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n = 10;
    cout << "The total of " << n << "! iteratively: " << Factorial::FactorialIterative(n) << endl;
    cout << "The total of " << n << "! recursively: " << Factorial::FactorialRecursive(n) << endl;
    
    return 0;
}
