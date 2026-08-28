/*
==================================================
Problem: Asteroid Collision

Platform: LeetCode
Problem Number: 735

Difficulty: Medium

Topics:
- Stack
- Simulation
- Array

Approach:
- Use a stack to store the asteroids that are still alive.
- For each asteroid, check whether it can collide with
  the asteroid at the top of the stack.
- A collision happens only when:
    1. The asteroid on the stack is moving right (> 0).
    2. The current asteroid is moving left (< 0).
- If the top asteroid is smaller, remove it and continue
  checking for another collision.
- If both asteroids have the same size, both are destroyed.
- If the current asteroid is smaller, it is destroyed.
- If no collision occurs, push the current asteroid.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-08-28
==================================================
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        stack<int> st;

        for (int asteroid : asteroids)
        {
            bool destroyed = false;

            while (!st.empty() &&
                   st.top() > 0 &&
                   asteroid < 0)
            {
                if (st.top() < -asteroid)
                {
                    st.pop();
                }
                else if (st.top() == -asteroid)
                {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else
                {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed)
            {
                st.push(asteroid);
            }
        }

        vector<int> result(st.size());

        for (int i = result.size() - 1; i >= 0; i--)
        {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};