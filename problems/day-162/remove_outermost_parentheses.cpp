
/*
==================================================
Problem: Remove Outermost Parentheses

Platform: LeetCode
Problem Number: 1021

Difficulty: Easy

Topics:
- String
- Stack

Approach:
- Use a depth counter to track the current nesting level.
- For an opening parenthesis, append it only if the current depth is greater than zero.
- Increase the depth after processing the opening parenthesis.
- For a closing parenthesis, decrease the depth first.
- Append it only if the resulting depth is greater than zero.
- Return the resulting string.

Time Complexity:
O(n), where n is the length of the input string.

Space Complexity:
O(n), for the resulting string.

Date:
2026-11-22
==================================================
*/

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string result;
        int depth = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                if (depth > 0)
                {
                    result += c;
                }

                depth++;
            }
            else
            {
                depth--;

                if (depth > 0)
                {
                    result += c;
                }
            }
        }

        return result;
    }
};
