/*
==================================================
Problem: Wave Sorting

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Sorting
- Greedy

Approach:
1. Sort the array in ascending order.
2. Swap every adjacent pair of elements.
3. The resulting array satisfies the wave condition:
   a[0] >= a[1] <= a[2] >= a[3] ...

Time Complexity:
O(n log n)

Space Complexity:
O(1)

Notes:
Sorting first guarantees that swapping adjacent
elements produces a valid wave ordering.

Date:
2026-07-22
==================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

void wave_sort(vector<int> &v)
{
    sort(v.begin(), v.end());

    for (int i = 0; i + 1 < v.size(); i += 2)
    {
        swap(v[i], v[i + 1]);
    }
}