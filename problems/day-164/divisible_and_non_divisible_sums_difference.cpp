
/*
==================================================
Problem: Divisible and Non-divisible Sums Difference

Platform: LeetCode
Problem Number: 2894

Difficulty: Easy

Topics:
- Math

Approach:
- Initialize two sums for divisible and non-divisible numbers.
- Iterate through all integers from 1 to n.
- If the current number is divisible by m, add it to the divisible sum.
- Otherwise, add it to the non-divisible sum.
- Return the difference between the two sums.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-11-24
==================================================
*/

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int divisibleSum = 0;
        int nonDivisibleSum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
            {
                divisibleSum += i;
            }
            else
            {
                nonDivisibleSum += i;
            }
        }

        return nonDivisibleSum - divisibleSum;
    }
};
