// my_class.cpp
#include <iostream> // header in standard library
#include "utility.h" // header in local directory

#include <vector>
using namespace std;

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