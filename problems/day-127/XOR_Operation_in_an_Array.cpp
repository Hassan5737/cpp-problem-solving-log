
/*
==================================================
Problem: XOR Operation in an Array

Platform: LeetCode
Problem Number: 1486

Difficulty: Easy

Topics:
- Array
- Bit Manipulation

Approach:
- Initialize the result to 0.
- Iterate from i = 0 to i < n.
- Calculate each value using start + 2 * i.
- XOR each value with the result.
- Return the final result.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-18
==================================================
*/

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            result ^= (start + 2 * i);
        }

        return result;
    }
};
