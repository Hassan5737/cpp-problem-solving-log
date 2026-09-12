/*
==================================================
Problem: Product of Array Except Self

Platform: LeetCode
Problem Number: 238

Difficulty: Medium

Topics:
- Array
- Prefix Product
- Suffix Product

Approach:
- Build prefix products from left to right.
- Store the prefix product before each element.
- Traverse from right to left while maintaining
  the suffix product.
- Multiply each stored prefix product by its
  corresponding suffix product.
- This produces the product of all elements except
  the current element without using division.

Time Complexity:
O(n)

Space Complexity:
O(1) extra space
(excluding the output array)

Date:
2026-09-12
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> result(n, 1);

        int prefix = 1;

        for(int i = 0; i < n; i++)
        {
            result[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;

        for(int i = n - 1; i >= 0; i--)
        {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};