// allocationPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "allocator.h"
using namespace std; 
using namespace allocationPractice;

int main()
{
    int size;
    Allocation <int> allocate;
    size = allocate.prompt();
    int * pNewInt = allocate.getPointer(); 
    allocate.addItem(pNewInt, size);
    allocate.display(pNewInt, size); 
    delete pNewInt;
    return 0; 
    
}

