/*
==================================================
Problem: Validate Stack Sequences

Platform: LeetCode
Problem Number: 946

Difficulty: Medium

Topics:
- Stack
- Simulation

Approach:
1. Traverse the pushed array in order.
2. Push each element onto the stack.
3. After every push, check whether the top of the stack
   matches the current element in the popped sequence.
4. If they match, pop the element and move to the next
   element in popped.
5. At the end, if all elements in popped were matched,
   the sequence is valid.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-08-14
==================================================
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
    {
        stack<int> st;

        int j = 0;

        for (int num : pushed)
        {
            st.push(num);

            while (!st.empty() && j < popped.size() && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }

        return st.empty();
    }
};

