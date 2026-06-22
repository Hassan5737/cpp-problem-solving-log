/*
==================================================
Problem: Least Larger

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Arrays
- Searching
- Loops
- Conditions

Approach:
Store the target value at the given index.

Traverse the entire array and search for
elements that are greater than the target.

Track the smallest valid candidate found
so far and store its index.

Return the index of the smallest larger
element, or -1 if no such element exists.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-06-22
==================================================
*/

#include <vector>
#include <climits>
#include <cstddef>

std::ptrdiff_t least_larger(const std::vector<int>& a, std::size_t i)
{
    int target = a[i];
    int smallest_larger = INT_MAX;
    std::ptrdiff_t answer_index = -1;

    for (std::size_t j = 0; j < a.size(); j++)
    {
        if (a[j] > target)
        {
            if (a[j] < smallest_larger)
            {
                smallest_larger = a[j];
                answer_index = j;
            }
        }
    }

    return answer_index;
}