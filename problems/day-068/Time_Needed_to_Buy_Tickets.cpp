/*
==================================================
Problem: Time Needed to Buy Tickets

Platform: LeetCode
Problem Number: 2073

Difficulty: Easy

Topics:
- Queue
- Simulation

Approach:
- Store each person's index in a queue.
- The person at the front buys one ticket.
- If they still need more tickets, move them to
  the back of the queue.
- If they finish, remove them from the queue.
- Continue until person k gets all their tickets.

Time Complexity:
O(total number of tickets processed)

Space Complexity:
O(n)

Date:
2026-08-20
==================================================
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int>& tickets, int k)
    {
        queue<int> q;

        for (int i = 0; i < tickets.size(); i++)
        {
            q.push(i);
        }

        int time = 0;

        while (!q.empty())
        {
            int person = q.front();
            q.pop();

            tickets[person]--;
            time++;

            if (person == k && tickets[person] == 0)
            {
                return time;
            }

            if (tickets[person] > 0)
            {
                q.push(person);
            }
        }

        return time;
    }
};

