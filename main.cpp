#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1570;

/*
Input: nums1 = [1,0,0,2,3], nums2 = [0,3,0,4,0]
Output: 8
Explanation: v1 = SparseVector(nums1) , v2 = SparseVector(nums2)
v1.dotProduct(v2) = 1*0 + 0*3 + 0*0 + 2*4 + 3*0 = 8
*/

tuple<vector<int>, vector<int>, int> testFixture1()
{
  const auto n1 = vector<int>{1, 0, 0, 2, 3};
  const auto n2 = vector<int>{0, 3, 0, 4, 0};

  return make_tuple(n1, n2, 8);
}

/*
Input: nums1 = [0,1,0,0,0], nums2 = [0,0,0,0,2]
Output: 0
Explanation: v1 = SparseVector(nums1) , v2 = SparseVector(nums2)
v1.dotProduct(v2) = 0*0 + 1*0 + 0*0 + 0*0 + 0*2 = 0
*/

tuple<vector<int>, vector<int>, int> testFixture2()
{
  const auto n1 = vector<int>{0, 1, 0, 0, 0};
  const auto n2 = vector<int>{0, 0, 0, 0, 2};

  return make_tuple(n1, n2, 0);
}

/*
Input: nums1 = [0,1,0,0,2,0,0], nums2 = [1,0,0,0,3,0,4]
Output: 6
*/

tuple<vector<int>, vector<int>, int> testFixture3()
{
  const auto n1 = vector<int>{0, 1, 0, 0, 2, 0, 0};
  const auto n2 = vector<int>{1, 0, 0, 0, 3, 0, 4};

  return make_tuple(n1, n2, 6);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << to_string(get<2>(f)) << endl;
  auto sv1 = SparesVector(get<0>(f));
  auto sv2 = SparesVector(get<1>(f));
  cout << "result: " << to_string(sv1.dotProduct(sv2)) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << to_string(get<2>(f)) << endl;
  auto sv1 = SparesVector(get<0>(f));
  auto sv2 = SparesVector(get<1>(f));
  cout << "result: " << to_string(sv1.dotProduct(sv2)) << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - expect to see " << to_string(get<2>(f)) << endl;
  auto sv1 = SparesVector(get<0>(f));
  auto sv2 = SparesVector(get<1>(f));
  cout << "result: " << to_string(sv1.dotProduct(sv2)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}