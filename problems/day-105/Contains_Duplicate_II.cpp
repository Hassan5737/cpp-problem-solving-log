/*
==================================================
Problem: Contains Duplicate II

Platform: LeetCode
Problem Number: 219

Difficulty: Easy

Topics:
- Array
- Hashing
- Sliding Window
- Unordered Set

Approach:
- Maintain a sliding window containing at most
  k previous elements.
- Store the elements inside the window using
  an unordered_set.
- If the current element already exists in the
  window, a nearby duplicate was found.
- After processing the current element, remove
  the element that is outside the window.

Time Complexity:
O(n) average

Space Complexity:
O(k)

Date:
2026-09-26
==================================================
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_set<int> window;

        for(int i = 0; i < nums.size(); i++)
        {
            if(window.count(nums[i]))
            {
                return true;
            }

            window.insert(nums[i]);

            if(window.size() > k)
            {
                window.erase(nums[i - k]);
            }
        }

        return false;
    }
};