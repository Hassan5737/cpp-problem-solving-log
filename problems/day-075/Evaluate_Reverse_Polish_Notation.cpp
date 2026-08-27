/*
==================================================
Problem: Evaluate Reverse Polish Notation

Platform: LeetCode
Problem Number: 150

Difficulty: Medium

Topics:
- Stack
- Math
- String

Approach:
- Traverse the tokens from left to right.
- If the token is a number, push it onto the stack.
- If the token is an operator:
    1. Pop the second operand.
    2. Pop the first operand.
    3. Apply the operator.
    4. Push the result back onto the stack.
- After processing all tokens, the stack contains
  the final result.

Important:
For subtraction and division, the order matters:
first operand = second popped value
second operand = first popped value.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-08-27
==================================================
*/

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> st;

        for (string token : tokens)
        {
            if (token == "+" ||
                token == "-" ||
                token == "*" ||
                token == "/")
            {
                int second = st.top();
                st.pop();

                int first = st.top();
                st.pop();

                if (token == "+")
                {
                    st.push(first + second);
                }
                else if (token == "-")
                {
                    st.push(first - second);
                }
                else if (token == "*")
                {
                    st.push(first * second);
                }
                else
                {
                    st.push(first / second);
                }
            }
            else
            {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};