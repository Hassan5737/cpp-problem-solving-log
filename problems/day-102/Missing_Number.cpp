/*
==================================================
Problem: Missing Number

Platform: LeetCode
Problem Number: 268

Difficulty: Easy

Topics:
- Array
- Bit Manipulation
- XOR

Approach:
- Use XOR to find the missing number.
- XOR all numbers from 0 to n.
- XOR all elements in the array.
- Every number that appears in both sets cancels
  out because x ^ x = 0.
- The remaining value is the missing number.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-23
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int n = nums.size();
        int result = n;

        for(int i = 0; i < n; i++)
        {
            result ^= i;
            result ^= nums[i];
        }

        return result;
    }
};