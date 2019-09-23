// Driver.cpp || Cpp file to act as driver for sorting algorithms, integrates STL vector utility & STL vector sorting algorithms
// IN: utility.h | utility.cpp, sort.h | sort.cpp
// OUT:  Display
// Meta Info: Priyank Trivedi  -  20/9/2019  
#include <iostream>
#ifndef vector_utility
#include "utility.h"
#endif
#include <time.h>
#include <vector>
#include <random>
using namespace std;
using namespace util;


int main()
{
    vector<int> a;
    Utility util;
    util.fillVector(a,10);
    util.printVector(a);
    return 0;      
}