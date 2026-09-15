/*
==================================================
Problem: Intersection of Two Arrays II

Platform: LeetCode
Problem Number: 350

Difficulty: Easy

Topics:
- Array
- Hashing
- Counting
- Unordered Map

Approach:
- Use an unordered_map to store the frequency
  of each element in the first array.
- Traverse the second array.
- If the current element has a remaining frequency,
  add it to the result and decrease its frequency.
- This preserves the number of occurrences shared
  between both arrays.

Time Complexity:
O(n + m)

Space Complexity:
O(n)

Date:
2026-09-15
==================================================
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> frequency;
        vector<int> result;

        for(int num : nums1)
        {
            frequency[num]++;
        }

        for(int num : nums2)
        {
            if(frequency[num] > 0)
            {
                result.push_back(num);
                frequency[num]--;
            }
        }

        return result;
    }
};