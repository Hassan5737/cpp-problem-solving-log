/*
==================================================
Problem: Single Number

Platform: LeetCode
Problem Number: 136

Difficulty: Easy

Topics:
- Array
- Bit Manipulation

Approach:
- Initialize the result with 0.
- Traverse all elements in the array.
- Use XOR to cancel out numbers that appear twice.
- The remaining value is the single number.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-07
==================================================
*/


#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int result = 0;

        for(int num : nums)
        {
            result ^= num;
        }

        return result;
    }
};