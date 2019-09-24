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
    void tEnd(const char*);
    void pStat();
};
}; // namespace util

#endif
