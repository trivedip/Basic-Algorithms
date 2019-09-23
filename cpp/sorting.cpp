// my_program.cpp
#include <iostream>
#ifndef vector_utility
#include "utility.h"
#endif
#include <time.h>
#include <vector>
#include <random>


using namespace std;

int main()
{
    vector<int> a;
    Utility U;
    U.fillVector(a,10);
    U.printVector(a);
    return 0;      
}