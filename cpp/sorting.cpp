#include <iostream>
#include <time.h>
#include <vector>
#include <random>
using namespace std;
void fillVector(vector<int>&, int);
void printVector(vector<int>);
void printVector2(vector<int>, vector<int>);

int main(){
    vector<int> a;
    fillVector(a,10);
    printVector(a);
    return 0;
}

void fillVector(vector<int>& a, int size){
    srand(1);
    for (int i=0; i< size; i++){
        a.push_back(rand()%100);
    }  
}

void printVector(vector<int> a){
    for(size_t i= 0; i<a.size(); i++){
        cout << a[i] << endl;
    }
}

void printVector2(vector<int> a, vector<int> b){
    for( size_t i=0; i< a.size(); i++){
        if(a.size() == b.size()){
            cout << a[i] << "  ::  " << b[i] << endl;
        }else{
            cout << "Both vectors must be of same size!" << endl;
        }
    }
}