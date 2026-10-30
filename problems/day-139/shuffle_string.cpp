
/*
==================================================
Problem: Shuffle String

Platform: LeetCode
Problem Number: 1528

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Create a new string with the same size as the input.
- Iterate through the original string.
- Place each character at its correct position using the indices array.
- Return the shuffled string.

Time Complexity:
O(n), where n is the length of the string.

Space Complexity:
O(n), for storing the resulting string.

Date:
2026-10-30
==================================================
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


class Solution
{
public:
    string restoreString(string s, vector<int>& indices)
    {
        string result(s.size(), ' ');

        for (int i = 0; i < s.size(); i++)
        {
            result[indices[i]] = s[i];
        }

        return result;
    }
};
