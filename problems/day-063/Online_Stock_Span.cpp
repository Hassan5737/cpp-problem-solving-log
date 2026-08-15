/*
==================================================
Problem: Online Stock Span

Platform: LeetCode
Problem Number: 901

Difficulty: Medium

Topics:
- Stack
- Monotonic Stack

Approach:
1. Maintain a stack of pairs containing:
   - The stock price.
   - The span associated with that price.
2. For every new price, start with a span of 1.
3. While the stack is not empty and the top price is
   less than or equal to the current price, merge its
   stored span into the current span and remove it.
4. Push the current price together with its calculated span.
5. Return the calculated span.

Time Complexity:
O(n) amortized

Space Complexity:
O(n)

Date:
2026-08-15
==================================================
*/

#include <iostream>
#include <stack>
#include <utility>

using namespace std;

class StockSpanner
{
private:
    stack<pair<int, int>> st;

public:
    StockSpanner()
    {
    }

    int next(int price)
    {
        int span = 1;

        while (!st.empty() && st.top().first <= price)
        {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});

        return span;
    }
};

