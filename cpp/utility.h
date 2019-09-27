// utility.h || General utility class to have with basic vector functionality and advance timing function
// Developed by - Priyank Trivedi
// For - Cpp practice
// IN : NA
// OUT : driver.cpp, sort.cpp
// Date - Aug 19
#ifndef vector_utility
#define vector_utility
#include <vector>
using namespace std;
namespace util
{
class Utility
{
private:
public:
    void test();
    void fillVector(vector<int> &, int);
    void printVector(vector<int>);
    void printVector2(vector<int>, vector<int>);
    void tStart();
    void tEnd(const char *);
    void pStat();
};
}; // namespace util

#endif
