/*
==================================================
Problem: The Supermarket Queue

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Simulation
- Greedy
- Searching

Approach:
Create an array representing the checkout tills,
where each element stores the total assigned time
for that till.

For each customer:
- Find the checkout till with the smallest current
  workload.
- Assign the customer to that till by adding their
  checkout time.

After processing all customers, return the largest
value in the tills array, since it represents the
time when the last customer finishes.

Time Complexity:
O(customers × n)

Space Complexity:
O(n)

Note:
This solution performs a linear search to find the
least busy checkout till. It can later be optimized
using a Min Heap (Priority Queue) to achieve
O(customers × log n).

Date:
2026-06-30
==================================================
*/


#include <vector>
#include <algorithm>

using namespace std;

long queueTime(vector<int> customers, int n)
{
    vector<int> tills(n, 0);

    for (int customer : customers)
    {
        int minIndex = 0;

        for (int i = 1; i < n; i++)
        {
            if (tills[i] < tills[minIndex])
            {
                minIndex = i;
            }
        }

        tills[minIndex] += customer;
    }

    return *max_element(tills.begin(), tills.end());
}