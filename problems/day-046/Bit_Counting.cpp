/*
==================================================
Problem: Bit Counting

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Mathematics
- Binary Representation
- Loops

Approach:
1. Initialize a counter.
2. While the number is greater than zero:
   - Check if the last binary digit is 1.
   - If so, increment the counter.
   - Divide the number by 2.
3. Return the counter.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Date:
2026-07-29
==================================================
*/

unsigned int countBits(unsigned long long n)
{
    unsigned int count = 0;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }

        n /= 2;
    }

    return count;
}