// utility.cpp || General utility class to have with basic vector functionality and advance timing function
// Developed by - Priyank Trivedi
// For - Cpp practice
// IN : utility.h
// OUT : NA
// Date - Aug 19
#include <iostream> // header in standard library
#include "utility.h" // header in local directory
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
#include <random>
using namespace std;
using namespace util;
std::chrono::high_resolution_clock::time_point sink;
// vector<int> time_analysis;
struct analysis{
    const char * func_name;
    int calc_time;
    analysis(const char* x, const int y):
    func_name(x), calc_time(y){}
};

vector<analysis> time_coll {};

void Utility::fillVector(vector<int>& a, int size){
    srand(15);
    for (int i=0; i< size; i++){
        a.push_back(rand()%100);
    }  
}

void Utility::printVector(vector<int> a){
    int index=0;
    for(size_t i= 0; i<a.size(); i++){
        cout << index << ":   " << a[i] << endl;
        index++;
    }
}

void Utility::printVector2(vector<int> a, vector<int> b){
    int index;
    cout << "Vector size is: " << a.size() << endl;
    for( size_t i=0; i< a.size(); i++){
        if(a.size() == b.size()){
            cout << index << "|   " << a[i] << " :: " << b[i] << endl;
            index++;
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
    // cout << __FUNCTION__ << endl;    //Compiler Dependent FROM-->https://stackoverflow.com/questions/733056/is-there-a-way-to-get-function-name-inside-a-c-function
    // time_coll.push_back(elapsed.count());
    time_coll.push_back((analysis(func_name, elapsed.count())));
    // cout << func_name << endl;    
}

void Utility::pStat(){
    for( const auto& elem: time_coll){
        cout << elem.func_name  << " : " << elem.calc_time << endl;
    }
}