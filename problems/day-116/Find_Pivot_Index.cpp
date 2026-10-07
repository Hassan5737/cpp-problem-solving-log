/*
==================================================
Problem: Find Pivot Index

Platform: LeetCode
Problem Number: 724

Difficulty: Easy

Topics:
- Array
- Prefix Sum
- Traversal

Approach:
- Calculate the total sum of all elements.
- Traverse the array while maintaining the
  sum of elements on the left.
- For each index, calculate the right sum as:
  total sum - left sum - current element.
- If the left sum equals the right sum,
  return the current index.
- Otherwise, add the current element to the
  left sum and continue.
- Return -1 if no pivot index exists.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-07
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int>& nums)
    {
        int totalSum = 0;

        for(int num : nums)
        {
            totalSum += num;
        }

        int leftSum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int rightSum = totalSum - leftSum - nums[i];

            if(leftSum == rightSum)
            {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};