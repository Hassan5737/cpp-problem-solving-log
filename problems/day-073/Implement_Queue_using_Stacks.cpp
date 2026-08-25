/*
==================================================
Problem: Implement Queue using Stacks

Platform: LeetCode
Problem Number: 232

Difficulty: Easy

Topics:
- Stack
- Queue
- Design

Approach:
- Use two stacks to implement queue behavior.
- The input stack stores newly pushed elements.
- The output stack provides the front element.
- When the output stack is empty, move all elements
  from the input stack to the output stack.
- This reverses the order and gives FIFO behavior.

Time Complexity:
- push(): O(1)
- pop(): Amortized O(1)
- peek(): Amortized O(1)
- empty(): O(1)

Space Complexity:
O(n)

Date:
2026-08-25
==================================================
*/

#include <iostream>
#include <stack>

using namespace std;

class MyQueue
{
private:
    stack<int> input;
    stack<int> output;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        input.push(x);
    }

    int pop()
    {
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }

        int value = output.top();
        output.pop();

        return value;
    }

    int peek()
    {
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }

    bool empty()
    {
        return input.empty() && output.empty();
    }
};