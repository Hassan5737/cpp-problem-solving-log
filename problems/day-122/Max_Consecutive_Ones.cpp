
/*
==================================================
Problem: Max Consecutive Ones

Platform: LeetCode
Problem Number: 485

Difficulty: Easy

Topics:
- Array
- Counting

Approach:
- Traverse the array from left to right.
- Increment the current count when the element is 1.
- Reset the current count when the element is 0.
- Update the maximum count after each 1.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-13
==================================================
*/

#include<vector>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0;
        int maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }
};
