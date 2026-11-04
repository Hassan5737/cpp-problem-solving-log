
/*
==================================================
Problem: Concatenation of Array

Platform: LeetCode
Problem Number: 1929

Difficulty: Easy

Topics:
- Array

Approach:
- Create a new vector with twice the size of the input vector.
- Iterate through the original vector twice.
- Append each element to the result vector.
- Return the resulting vector.

Time Complexity:
O(n), where n is the size of the input vector.

Space Complexity:
O(n), for storing the resulting vector.

Date:
2026-11-04
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        vector<int> result;

        for (int i = 0; i < 2; i++)
        {
            for (int num : nums)
            {
                result.push_back(num);
            }
        }

        return result;
    }
};
