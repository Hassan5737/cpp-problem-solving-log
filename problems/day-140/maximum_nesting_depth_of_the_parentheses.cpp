
/*
==================================================
Problem: Maximum Nesting Depth of the Parentheses

Platform: LeetCode
Problem Number: 1614

Difficulty: Easy

Topics:
- String
- Stack

Approach:
- Initialize a variable to track the current depth.
- Initialize another variable to store the maximum depth.
- Increment the current depth when encountering '('.
- Update the maximum depth whenever the current depth increases.
- Decrement the current depth when encountering ')'.
- Return the maximum depth.

Time Complexity:
O(n), where n is the length of the string.

Space Complexity:
O(1)

Date:
2026-10-31
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
    int maxDepth(string s)
    {
        int depth = 0;
        int maxDepth = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                depth++;
                maxDepth = max(maxDepth, depth);
            }
            else if (c == ')')
            {
                depth--;
            }
        }

        return maxDepth;
    }
};
