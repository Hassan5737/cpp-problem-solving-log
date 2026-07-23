/*
==================================================
Problem: Common Array Elements

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Sorting
- Three Pointers

Approach:
1. Sort the three arrays.
2. Use three indices to traverse them simultaneously.
3. If all current elements are equal:
   - Add the value to the sum.
   - Move all three indices.
4. Otherwise:
   - Move the index (or indices) pointing to the
     smallest value.
5. Continue until one array is exhausted.
6. Return the total sum.

Time Complexity:
O(n log n + m log m + k log k)

Space Complexity:
O(1)

Notes:
Sorting allows us to efficiently handle duplicate
values while preserving their multiplicity.

Date:
2026-07-23
==================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

int common(vector<int> a, vector<int> b, vector<int> c)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int i = 0;
    int j = 0;
    int k = 0;
    int sum = 0;

    while (i < a.size() && j < b.size() && k < c.size())
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            sum += a[i];
            i++;
            j++;
            k++;
        }
        else
        {
            int minimum = min({a[i], b[j], c[k]});

            if (a[i] == minimum) i++;
            if (b[j] == minimum) j++;
            if (c[k] == minimum) k++;
        }
    }

    return sum;
}