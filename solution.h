
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;
namespace sol1570
{
    class SparesVector
    {
    private:
    public:
        SparesVector(vector<int> &nums);
        unordered_map<int, int> nonZeros;
        int dotProduct(SparesVector &sv);
    };
}
#endif