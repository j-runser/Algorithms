//
//  Stack.hpp
//  Stack
//
//  Created by Joseph Runser on 9/29/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <vector>

using namespace std;

class Stack {
    
public:
    Stack();
    Stack(int maxSize);
    bool push(int e);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
    void clear();
    
private:
    int top;
    unsigned long maxSize;
    vector<int> stack;
    
};

#endif /* Stack_hpp */
