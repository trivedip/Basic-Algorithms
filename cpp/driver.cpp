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
#ifndef BASIC_ALGORITHMS_CPP_PEAK_FINDING_H
#include "peak_finding.h"
#endif
#include <time.h>
#include <vector>
#include <chrono>
#include <random>
#include "exp.h"
#include <memory>
using namespace std;
using namespace util;


int main()
{
    int arr[10];
    auto main_time = chrono::high_resolution_clock::now();

#if 0  //If block 1 - related to exp.h and exp.cpp
//    Good example of inheritence and how object creation and memory allotion on heap works.
    Exp exp;
    Exp* exp_one = new Exp;     // Equivilent to Exp* exp_one = (Exp*)malloc(sizeof(Entity));    // (*Exp).print()
    (*exp_one).print();
    std::shared_ptr<Exp> exp2 = std::make_shared<Exp>();
    exp2->print();
    Exp_extend expt;
    exp.print();
    expt.print();
#endif
    vector<int> a;
    vector<int> b;
    Utility util;
    peak_finder p;
    Sort srt;

    util.fillArray(arr,10);
    p.findLocalPeak(arr, 10);

    util.tStart();
#if 0
    util.fillVector(a,100);
    b = a;
    srt.BubbleSort(a);
    util.printVector2(b,a);
    util.tEnd(__FUNCTION__);


    util.pStat();
    auto main_time_end = chrono::high_resolution_clock::now();
    auto main_elapsed = std::chrono::duration_cast<std::chrono::microseconds>(main_time_end - main_time);
    cout  << "Time calculate from main function: " << main_elapsed.count() << endl;
#endif
    return 0;
}