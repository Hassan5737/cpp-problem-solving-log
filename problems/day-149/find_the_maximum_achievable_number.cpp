
/*
==================================================
Problem: Find the Maximum Achievable Number

Platform: LeetCode
Problem Number: 2769

Difficulty: Easy

Topics:
- Math

Approach:
- Each operation can increase the target number by 1.
- At the same time, the value of num can decrease by 1.
- Therefore, each operation creates a difference of 2.
- Add twice the number of operations to num.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-09
==================================================
*/

class Solution
{
public:
    int theMaximumAchievableX(int num, int t)
    {
        return num + (2 * t);
    }
};
