
// OUTPUT::
// main : 0
// Time calculate from main function: 974


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
#include <random>
using namespace std;
// using namespace util;
std::chrono::high_resolution_clock::time_point sink;
// vector<int> time_analysis;

class Utility
{
public:
    std::chrono::high_resolution_clock::time_point sink;
    struct analysis
    {
        const char *func_name;
        chrono::high_resolution_clock::time_point start_time;
        chrono::high_resolution_clock::time_point end_time;
        analysis(const char *x, chrono::high_resolution_clock::time_point y, chrono::high_resolution_clock::time_point z) : func_name(x), start_time(y), end_time(z)  {}
    };

    vector<analysis> time_coll{};

    void tStart()
    {
        auto chrono_strt = chrono::high_resolution_clock::now();
        sink = chrono_strt;
    }

    void tEnd(const char *func_name)
    {
        std::chrono::high_resolution_clock::time_point chrono_stp = chrono::high_resolution_clock::now();
        std::chrono::microseconds elapsed = std::chrono::duration_cast<std::chrono::microseconds>(chrono_stp - sink);
        time_coll.push_back(analysis(func_name, sink, chrono_stp));
    }

    void pStat()
    {
        for (const auto &elem : time_coll)
        {
            //  cout << elem.func_name  << " : " << std::chrono::duration_cast<std::chrono::microseconds>(elem.calc_time.count()) << "us\n";
            auto temp = std::chrono::duration_cast<std::chrono::microseconds>(elem.end_time - elem.start_time);
            cout << elem.func_name << " : " << temp.count() << endl;
        }
    }
};

int main(){

     vector<int> a;
     auto main_time = chrono::high_resolution_clock::now();
     srand(time(NULL));
    Utility u;
    u.tStart();
     for (size_t i = 0; i <2000; i++){
         a.push_back(rand());
     }
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
     u.pStat();

    auto main_time_end = chrono::high_resolution_clock::now();
    auto main_elapsed = std::chrono::duration_cast<std::chrono::microseconds>(main_time_end - main_time);
    cout  << "Time calculate from main function: " << main_elapsed.count() << endl;
    return 0;

    // 
    
}