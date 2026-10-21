
/*
==================================================
Problem: Number of Steps to Reduce a Number to Zero

Platform: LeetCode
Problem Number: 1342

Difficulty: Easy

Topics:
- Math
- Bit Manipulation

Approach:
- Initialize a counter to zero.
- While num is greater than zero:
  - If num is even, divide it by 2.
  - Otherwise, subtract 1 from num.
  - Increment the counter.
- Return the total number of steps.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Date:
2026-10-21
==================================================
*/

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int steps = 0;

        while (num > 0)
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num -= 1;
            }

            steps++;
        }

        return steps;
    }
};
