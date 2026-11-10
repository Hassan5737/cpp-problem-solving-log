
/*
==================================================
Problem: Sum Multiples

Platform: LeetCode
Problem Number: 2652

Difficulty: Easy

Topics:
- Math

Approach:
- Iterate through all integers from 1 to n.
- Check if each number is divisible by 3, 5, or 7.
- Add the number to the total sum if at least one condition is true.
- Return the final sum.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-11-10
==================================================
*/

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            {
                sum += i;
            }
        }

        return sum;
    }
};
