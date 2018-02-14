//
//  Stack.cpp
//  Stack
//
//  Created by Joseph Runser on 9/29/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include "Stack.hpp"

Stack::Stack() {
    top = -1;
    maxSize = stack.max_size();
}

Stack::Stack(int maxSize) {
    top = -1;
    this->maxSize = maxSize;
}

bool Stack::push(int e) {
    if(isFull()) return false;
    else {
        top++;
        stack[top] = e;
        return true;
    }
}

int Stack::pop() {
    if(isEmpty()) return -1;
    else return stack[top--];
}

int Stack::peek() {
    if(isEmpty()) return -1;
    else return stack[top];
}

bool Stack::isFull() {
    if(top >= maxSize - 1) return true;
    return false;
}

bool Stack::isEmpty() {
    if(top <= -1) return true;
    return false;
}

void Stack::clear() {
    top = -1;
}
