/*
==================================================
Problem: Move Zeroes

Platform: LeetCode
Problem Number: 283

Difficulty: Easy

Topics:
- Array

Approach:
- Traverse the array and move all non-zero elements
  to the front while maintaining their order.
- Fill the remaining positions with zeros.
- Modify the array in-place.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-09
==================================================
*/


#include <vector>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int index = 0;

        for(int num : nums)
        {
            if(num != 0)
            {
                nums[index] = num;
                index++;
            }
        }

        while(index < nums.size())
        {
            nums[index] = 0;
            index++;
        }
    }
};