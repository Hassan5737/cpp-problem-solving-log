/*
==================================================
Problem: Intersection of Two Arrays

Platform: LeetCode
Problem Number: 349

Difficulty: Easy

Topics:
- Array
- Hashing
- Unordered Set

Approach:
- Store all elements from the first array in an
  unordered_set.
- Traverse the second array.
- If an element exists in the first set, add it
  to the result set.
- The result set automatically removes duplicates.
- Convert the result set into a vector.

Time Complexity:
O(n + m) average

Space Complexity:
O(n)

Date:
2026-09-14
==================================================
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> resultSet;

        for(int num : nums2)
        {
            if(set1.count(num))
            {
                resultSet.insert(num);
            }
        }

        return vector<int>(resultSet.begin(), resultSet.end());
    }
};