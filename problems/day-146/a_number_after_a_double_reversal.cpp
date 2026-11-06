
/*
==================================================
Problem: A Number After a Double Reversal

Platform: LeetCode
Problem Number: 2119

Difficulty: Easy

Topics:
- Math

Approach:
- Check whether the number is zero or does not end with zero.
- Reversing a number twice restores the original number unless it has trailing zeros.
- Return true if the number is zero or does not end with zero.
- Otherwise, return false.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-06
==================================================
*/

class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        return num == 0 || num % 10 != 0;
    }
};
