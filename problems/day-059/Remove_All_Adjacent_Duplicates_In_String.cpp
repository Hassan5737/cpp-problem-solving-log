/*
==================================================
Problem: Remove All Adjacent Duplicates In String

Platform: LeetCode

Difficulty: Easy

Topics:
- Stack
- Strings

Approach:
1. Create a stack to build the resulting string.
2. Traverse the input string character by character.
3. If the stack is not empty and the current character
   matches the character at the top of the stack, remove
   the top character because they form an adjacent duplicate pair.
4. Otherwise, push the current character onto the stack.
5. After processing the entire string, extract the characters
   from the stack into a result string.
6. Since the stack returns characters in reverse order,
   reverse the result string.
7. Return the final string.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-08-11
==================================================
*/

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string result;
        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && c == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

