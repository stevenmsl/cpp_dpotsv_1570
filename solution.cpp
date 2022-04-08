#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iterator>
using namespace sol1570;
using namespace std;

SparesVector::SparesVector(vector<int> &nums)
{
  for (auto i = 0; i < nums.size(); i++)
    if (nums[i])
      nonZeros[i] = nums[i];
}

int SparesVector::dotProduct(SparesVector &sv)
{
  /* we iterate over indexes in sv's nonZeros to
     check if they are also in this instance's
     nonZeros
     - so if this instance is the only sparse
       vector of these two we can switch
       it around and iterate through this
       instance's nonzeros instead to optimize
       this function as there will be fewer
       indexes to check
  */

  if (nonZeros.size() < sv.nonZeros.size())
    return sv.dotProduct(*this);

  auto result = 0;

  for (auto &[i, v] : sv.nonZeros)
    if (nonZeros.count(i))
      result += nonZeros[i] * v;

  return result;
}