/*
==================================================
Problem: Happy Number

Platform: LeetCode
Problem Number: 202

Difficulty: Easy

Topics:
- Hashing
- Math
- Unordered Set
- Cycle Detection

Approach:
- Repeatedly calculate the sum of the squares
  of the digits of the number.
- Store previously seen numbers in an unordered_set.
- If the number becomes 1, it is a happy number.
- If a number repeats, a cycle exists and the number
  is not a happy number.

Time Complexity:
O(log n) per transformation

Space Complexity:
O(log n)

Date:
2026-09-16
==================================================
*/

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> seen;

        while(n != 1)
        {
            if(seen.count(n))
            {
                return false;
            }

            seen.insert(n);

            int sum = 0;

            while(n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum;
        }

        return true;
    }
};