/*
==================================================
Problem: Find Numbers with Even Number of Digits

Platform: LeetCode
Problem Number: 1295

Difficulty: Easy

Topics:
- Array
- Counting
- Math

Approach:
- Traverse the array using a range-based for loop.
- Count the digits of each number by repeatedly
  dividing it by 10.
- Check whether the digit count is even.
- Increment the result counter for each number
  with an even number of digits.
- Return the total count.

Time Complexity:
O(n * d), where n is the number of elements
and d is the maximum number of digits.

Space Complexity:
O(1)

Date:
2026-10-08
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int>& nums)
    {
        int count = 0;

        for(int num : nums)
        {
            int digits = 0;

            while(num > 0)
            {
                digits++;
                num /= 10;
            }

            if(digits % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};

