
/*
==================================================
Problem: Left and Right Sum Differences

Platform: LeetCode
Problem Number: 2574

Difficulty: Easy

Topics:
- Array
- Prefix Sum

Approach:
- Calculate the total sum of all array elements.
- Initialize the left sum to zero.
- Iterate through the array from left to right.
- For each element, subtract it from the total sum to get the right sum.
- Store the absolute difference between the left and right sums.
- Add the current element to the left sum.
- Return the resulting array.

Time Complexity:
O(n), where n is the number of elements.

Space Complexity:
O(n), for the resulting answer array.

Date:
2026-11-16
==================================================
*/

#include<vector>
#include <cstdlib>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        int totalSum = 0;

        for (int num : nums)
        {
            totalSum += num;
        }

        int leftSum = 0;
        vector<int> answer;

        for (int num : nums)
        {
            int rightSum = totalSum - leftSum - num;

            answer.push_back(abs(leftSum - rightSum));

            leftSum += num;
        }

        return answer;
    }
};
