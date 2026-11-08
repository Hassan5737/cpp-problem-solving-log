
/*
==================================================
Problem: Difference Between Element Sum and Digit Sum of an Array

Platform: LeetCode
Problem Number: 2535

Difficulty: Easy

Topics:
- Array
- Math

Approach:
- Calculate the sum of all elements in the array.
- Extract and sum the digits of each element.
- Calculate the absolute difference between the two sums.
- Return the resulting difference.

Time Complexity:
O(n * d), where n is the number of elements and d is the maximum number of digits in an element.

Space Complexity:
O(1)

Date:
2026-11-08
==================================================
*/


#include <vector>
using namespace std;

class Solution
{
public:
    int differenceOfSum(vector<int>& nums)
    {
        int elementSum = 0;
        int digitSum = 0;

        for (int num : nums)
        {
            elementSum += num;

            while (num > 0)
            {
                digitSum += num % 10;
                num /= 10;
            }
        }

        return elementSum - digitSum;
    }
};
