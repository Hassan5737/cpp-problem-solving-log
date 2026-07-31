/*
==================================================
Problem: Find the Mine!

Platform: Codewars

Difficulty: 6 kyu

Topics:
- 2D Arrays
- Nested Loops
- Matrix Traversal

Approach:
1. Traverse the 2D grid row by row.
2. Check every cell.
3. When the value is 1, return its row and column indices.
4. Since there is exactly one mine, return immediately.

Time Complexity:
O(n²)

Space Complexity:
O(1)

Date:
2026-07-31
==================================================
*/

#include <utility>
#include <vector>
#include <cstddef>

using namespace std;

pair<size_t, size_t> mineLocation(const vector<vector<int>>& field)
{
    for (size_t i = 0; i < field.size(); i++)
    {
        for (size_t j = 0; j < field[i].size(); j++)
        {
            if (field[i][j] == 1)
            {
                return {i, j};
            }
        }
    }

    return {0, 0};
}