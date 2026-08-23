/*
==================================================
Problem: Find the Winner of the Circular Game

Platform: LeetCode
Problem Number: 1823

Difficulty: Medium

Topics:
- Queue
- Simulation

Approach:
- Store all players in a queue.
- Count k players starting from the front.
- Move the first k - 1 players to the back.
- Remove the kth player.
- Repeat until only one player remains.
- The remaining player is the winner.

Time Complexity:
O(n * k)

Space Complexity:
O(n)

Date:
2026-08-23
==================================================
*/

#include <iostream>
#include <queue>

using namespace std;

class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        queue<int> q;

        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }

        while (q.size() > 1)
        {
            for (int i = 1; i < k; i++)
            {
                q.push(q.front());
                q.pop();
            }

            q.pop();
        }

        return q.front();
    }
};