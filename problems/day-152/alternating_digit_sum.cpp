
/*
==================================================
Problem: Alternating Digit Sum

Platform: LeetCode
Problem Number: 2544

Difficulty: Easy

Topics:
- Math

Approach:
- Convert the number to a string to process its digits from left to right.
- Add digits at even indices and subtract digits at odd indices.
- Return the resulting alternating sum.

Time Complexity:
O(d), where d is the number of digits.

Space Complexity:
O(d), for the string representation of the number.

Date:
2026-11-12
==================================================
*/
#include<iostream>
using namespace std;


class Solution
{
public:
    int alternateDigitSum(int n)
    {
        string digits = to_string(n);
        int sum = 0;

        for (int i = 0; i < digits.size(); i++)
        {
            int digit = digits[i] - '0';

            if (i % 2 == 0)
            {
                sum += digit;
            }
            else
            {
                sum -= digit;
            }
        }

        return sum;
    }
};
