
/*
==================================================
Problem: Count Odd Numbers in an Interval Range

Platform: LeetCode
Problem Number: 1523

Difficulty: Easy

Topics:
- Math

Approach:
- Count the odd numbers from 0 to high.
- Count the odd numbers from 0 to low - 1.
- Subtract the two counts to get the number of odd integers in the given interval.
- Return the result.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-03
==================================================
*/

class Solution
{
public:
    int countOdds(int low, int high)
    {
        return (high + 1) / 2 - low / 2;
    }
};
