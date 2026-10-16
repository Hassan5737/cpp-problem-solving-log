
/*
==================================================
Problem: Sign of the Product of an Array

Platform: LeetCode
Problem Number: 1822

Difficulty: Easy

Topics:
- Array
- Math

Approach:
- Iterate through the array elements.
- Return 0 immediately if any element is zero.
- Toggle the sign whenever a negative element is encountered.
- Return the final sign.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-16
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int>& nums)
    {
        int sign = 1;

        for (int num : nums)
        {
            if (num == 0)
            {
                return 0;
            }

            if (num < 0)
            {
                sign *= -1;
            }
        }

        return sign;
    }
};
