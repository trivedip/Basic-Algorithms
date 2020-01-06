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
    int mid = start + ceil((end-start)/2);
//    std::cout << arr.size()-1 << std::endl;
//    std::cout << "Mid: " << mid << std::endl;
    if(mid>=end){
//        std::cout << "Shoud have been terminated!!!!" << std::endl;
    }
    if((arr[mid]>=arr[mid+1] and mid>=arr.size()) or  ( mid<=0 and arr[mid]>=arr[mid-1]) ) {
        std::cout << "mid :" << mid << std::endl;
        if(mid>arr.size()){mid=4;}
        if(mid<0){mid=0;}
        return arr[mid];
    }else if(arr[mid-1]>arr[mid]){
        return findLocalPeak(arr, start =0, end=mid-1);
    }else {
//        std::cout << "Ola" << std::endl;
        return peak_finder::findLocalPeak(arr, start =mid+1, end=(arr.back()));
    }

}
void peak_finder::stack(int * ) {

}