/*
==================================================
Problem: Min Stack

Platform: LeetCode
Problem Number: 155

Difficulty: Medium

Topics:
- Stack
- Design

Approach:
- Use two stacks.
- The main stack stores all values.
- The minimum stack stores the minimum value
  at each stack level.
- When pushing a value, update the minimum stack
  with the smaller value between the new value
  and the current minimum.
- When popping, pop from both stacks.
- The top of the minimum stack is always the
  current minimum value.

Time Complexity:
- push(): O(1)
- pop(): O(1)
- top(): O(1)
- getMin(): O(1)

Space Complexity:
O(n)

Date:
2026-08-27
==================================================
*/

#include <iostream>
#include <stack>

using namespace std;

class MinStack
{
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        st.push(val);

        if (minSt.empty())
        {
            minSt.push(val);
        }
        else
        {
            minSt.push(min(val, minSt.top()));
        }
    }

    void pop()
    {
        st.pop();
        minSt.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minSt.top();
    }
};