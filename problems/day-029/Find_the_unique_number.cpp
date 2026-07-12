/*
==================================================
Problem: Find the Unique Number

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Fundamentals
- Algorithms
- Linear Search

Approach:
First, determine the majority value using the
first three elements.

If the first element differs from both the second
and third elements, it is immediately the unique
value.

Otherwise, identify the majority value and scan
the array to find the first element that differs
from it.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-07-12
==================================================
*/

#include <vector>

using namespace std;

float find_uniq(const vector<float>& v)
{
    if (v[0] != v[1] && v[0] != v[2])
    {
        return v[0];
    }

    float majority;

    if (v[0] == v[1])
    {
        majority = v[0];
    }
    else
    {
        majority = v[2];
    }

    for (float number : v)
    {
        if (number != majority)
        {
            return number;
        }
    }

    return 0.0f; 
}