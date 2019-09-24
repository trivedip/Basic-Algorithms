// my_class.cpp
#include <iostream> // header in standard library
#include "utility.h" // header in local directory
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
using namespace std;
using namespace util;
std::chrono::high_resolution_clock::time_point sink;
vector<int> time_analysis;

void Utility::fillVector(vector<int>& a, int size){
    srand(1);
    for (int i=0; i< size; i++){
        a.push_back(rand()%100);
    }  
}

void Utility::printVector(vector<int> a){
    for(size_t i= 0; i<a.size(); i++){
        cout << a[i] << endl;
    }
}

void Utility::printVector2(vector<int> a, vector<int> b){
    for( size_t i=0; i< a.size(); i++){
        if(a.size() == b.size()){
            cout << a[i] << "  ::  " << b[i] << endl;
        }else{
            cout << "Both vectors must be of same size!" << endl;
        }
    }
}

void Utility::tStart(){
      auto chrono_strt = chrono::high_resolution_clock::now(); 
      sink = chrono_strt;
    //   return chrono_strt;
}

void Utility::test(){
    cout << "Hello there from test function!" << endl;
}

void Utility::tEnd(const char* func_name){
    std::chrono::high_resolution_clock::time_point chrono_stp = chrono::high_resolution_clock::now(); 
    std::chrono::microseconds elapsed = std::chrono::duration_cast<std::chrono::microseconds>(chrono_stp - sink);    
    cout << __FUNCTION__ << endl;    //Compiler Dependent FROM-->https://stackoverflow.com/questions/733056/is-there-a-way-to-get-function-name-inside-a-c-function
    time_analysis.push_back(elapsed.count());
    cout << func_name << endl;
    
}

void Utility::pStat(){
    for(size_t i=0; i< time_analysis.size(); i++){
        cout << time_analysis[i] << endl;
    }
}