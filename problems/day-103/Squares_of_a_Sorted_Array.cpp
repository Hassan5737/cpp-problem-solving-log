/*
==================================================
Problem: Squares of a Sorted Array

Platform: LeetCode
Problem Number: 977

Difficulty: Easy

Topics:
- Array
- Two Pointers

Approach:
- Use two pointers at the beginning and end
  of the sorted array.
- Compare the absolute values of both ends
  through their squared values.
- Place the larger square at the end of the
  result array.
- Move the corresponding pointer inward.
- Continue until all elements are processed.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-09-24
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int index = n - 1;

        while(left <= right)
        {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare)
            {
                result[index] = leftSquare;
                left++;
            }
            else
            {
                result[index] = rightSquare;
                right--;
            }

            index--;
        }

        return result;
    }
};