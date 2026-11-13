
/*
==================================================
Problem: Smallest Even Multiple

Platform: LeetCode
Problem Number: 2413

Difficulty: Easy

Topics:
- Math
- Number Theory

Approach:
- Check whether n is even or odd.
- If n is even, it is already the smallest even multiple.
- If n is odd, multiply it by 2 to get the smallest even multiple.
- Return the result.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-13
==================================================
*/

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        return (n % 2 == 0) ? n : n * 2;
    }
};
