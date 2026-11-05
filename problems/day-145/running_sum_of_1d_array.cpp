
/*
==================================================
Problem: Running Sum of 1d Array

Platform: LeetCode
Problem Number: 1480

Difficulty: Easy

Topics:
- Array
- Prefix Sum

Approach:
- Initialize a variable to track the running sum.
- Iterate through the input array.
- Add each element to the running sum.
- Store the updated running sum at the current position.
- Return the modified array.

Time Complexity:
O(n), where n is the size of the input array.

Space Complexity:
O(1), using the input array for storing the results.

Date:
2026-11-05
==================================================
*/
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};
