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
    int temp;
    for (int i=0; i<=(a.size());i++){
        for(int j=0; j<=(a.size())-2;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    
    }
    u.tEnd(__FUNCTION__);
}

