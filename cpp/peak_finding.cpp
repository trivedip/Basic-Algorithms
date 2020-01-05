//
// Created by Priyank on 12/27/2019.
//

#include <cmath>
#include <iostream>
#ifndef BASIC_ALGORITHMS_CPP_PEAK_FINDING_H
#include "peak_finding.h"
#endif
#include<array>
enum Apple : unsigned char
{A=0, B, C};
int peak_finder::findLocalPeak(const std::array<int,5> &arr,int start=0,int end=0) {
    int mid = ceil(arr.size()/2);

    if((mid==0 || arr[mid-1]<=arr[mid]) &&(mid==arr.size()-1)){
        return arr[mid];
    }else if(arr[mid-1]>arr[mid]){
        findLocalPeak(std::array<int,5> &arr, start =0, end=mid);
    }else if(arr[mid+1]>arr[mid]){
        findLocalPeak(std::array<int,5> &arr, start =mid, end=*(arr.end()));
    }



    return 0;
}
void peak_finder::stack(int * ) {

}