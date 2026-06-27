/*
==================================================
Problem: Thinking & Testing: True or False

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Bit Manipulation
- Binary Representation

Approach:
The hidden rule is to count the number
of set bits (1s) in the binary
representation of the given integer.

Iterate through all bits using bitwise
operations:
- (n & 1) checks the least significant bit.
- (n >> 1) shifts the number right.

Count all set bits and return the total.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Date:
2026-06-27
==================================================
*/

int testit(int n)
{
    int count = 0;

    while (n > 0)
    {
        count += (n & 1);
        n >>= 1;
    }

    return count;
}