#ifndef vector_sort
#include "sort.h"
#endif
#ifndef vector_utility
#include "utility.h"
#endif
#include <vector>
#include <iostream>
using namespace util;
using namespace std;
Utility u;
void Sort::BubbleSort(vector<int>& a){
    u.tStart();
    // for(size_t i: a){
    //     std::cout << a[i] << endl;
    // }
    for(size_t i =0; i<a.size(); i++){
        cout << a[i] << endl;
    }
    u.tEnd(__FUNCTION__);
}

