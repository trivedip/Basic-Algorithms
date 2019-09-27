// Driver.cpp || Cpp file to act as driver for sorting algorithms, integrates STL vector utility & STL vector sorting algorithms
// IN: utility.h | utility.cpp, sort.h | sort.cpp
// OUT:  Display
// Meta Info: Priyank Trivedi  -  20/9/2019  
#include <iostream>
#ifndef vector_utility
#include "utility.h"
#endif
#ifndef vector_sort
#include "sort.h"
#endif
#include <time.h>
#include <vector>
#include <random>
using namespace std;
using namespace util;


int main()
{
    vector<int> a;
    vector<int> b;
    Utility util;
    Sort srt;
    
    util.fillVector(a,100);
    b = a;
    srt.BubbleSort(a);
    util.printVector2(b,a);
    
    
    
    util.pStat();
    return 0;      
}