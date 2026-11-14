
/*
==================================================
Problem: Maximum Count of Positive Integer and Negative Integer

Platform: LeetCode
Problem Number: 2529

Difficulty: Easy

Topics:
- Array
- Binary Search

Approach:
- Initialize counters for positive and negative integers.
- Iterate through the array.
- Increment the negative counter for values less than zero.
- Increment the positive counter for values greater than zero.
- Return the maximum of the two counters.

Time Complexity:
O(n), where n is the number of elements in the array.

Space Complexity:
O(1)

Date:
2026-11-14
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int maximumCount(vector<int>& nums)
    {
        int positiveCount = 0;
        int negativeCount = 0;

        for (int num : nums)
        {
            if (num > 0)
            {
                positiveCount++;
            }
            else if (num < 0)
            {
                negativeCount++;
            }
        }

        return max(positiveCount, negativeCount);
    }
};
