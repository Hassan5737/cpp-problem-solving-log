/*
==================================================
Problem: Search Insert Position

Platform: LeetCode
Problem Number: 35

Difficulty: Easy

Topics:
- Array
- Linear Search

Approach:
- Traverse the sorted array from left to right.
- Return the index of the first element that is
  greater than or equal to the target.
- If no such element exists, return the array size
  as the insertion position.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-10
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int>& nums, int target)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= target)
            {
                return i;
            }
        }

        return nums.size();
    }
};