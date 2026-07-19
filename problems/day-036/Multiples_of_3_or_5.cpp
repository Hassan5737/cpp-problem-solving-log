/*
==================================================
Problem: Multiples of 3 or 5

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Loops
- Conditions
- Mathematics

Approach:
1. Return 0 if the input number is negative or zero.
2. Traverse all numbers from 1 to number - 1.
3. If a number is divisible by 3 or 5, add it to the sum.
4. Return the final sum.

Time Complexity:
O(n)

Space Complexity:
O(1)

Notes:
Numbers divisible by both 3 and 5 are counted only once
using the logical OR operator.

Date:
2026-07-19
==================================================
*/

int solution(int number)
{
    if (number <= 0)
    {
        return 0;
    }

    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

