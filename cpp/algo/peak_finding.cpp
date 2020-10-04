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
int peak_finder::findLocalPeak(std::array<int,5> arr,int start=0,int end=5) {
    int mid = (int)(start+((end-start)/2));
    if((arr[mid]>=arr[mid-1] || mid==0) && (arr[mid]>=arr[mid+1] || end==mid)){
        return arr[mid];
    }
    else if(arr[mid]<arr[mid-1]){
        return findLocalPeak(arr, start=start, end=(mid-1));
    }else {
        return findLocalPeak(arr, start=mid+1, end=end);
    }

}
void peak_finder::stack(int * ) {

}