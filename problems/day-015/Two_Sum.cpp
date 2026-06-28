/*
==================================================
Problem: Two Sum

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Brute Force
- Nested Loops

Approach:
Check every possible pair of elements
using two nested loops.

If the sum of the current pair equals
the target value, return their indices.

The problem guarantees that exactly one
valid answer always exists.

Time Complexity:
O(n²)

Space Complexity:
O(1)

Date:
2026-06-28
==================================================
*/

#include <vector>
#include <utility>

using namespace std;

pair<size_t, size_t> two_sum(const vector<int>& numbers, int target)
{
    for (size_t i = 0; i < numbers.size(); i++)
    {
        for (size_t j = i + 1; j < numbers.size(); j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {0, 0};
}