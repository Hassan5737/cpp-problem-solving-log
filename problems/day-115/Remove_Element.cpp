/*
==================================================
Problem: Remove Element

Platform: LeetCode
Problem Number: 27

Difficulty: Easy

Topics:
- Array
- Two Pointers
- In-place Array Manipulation

Approach:
- Use i to traverse the entire array.
- Use k to track the position where the next
  valid element should be placed.
- If nums[i] is not equal to val, copy it to
  nums[k] and increment k.
- Ignore elements equal to val.
- Return k, which represents the number of
  remaining elements.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-06
==================================================
*/

#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int k = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};