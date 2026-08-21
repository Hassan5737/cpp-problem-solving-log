/*
==================================================
Problem: Rotting Oranges

Platform: LeetCode
Problem Number: 994

Difficulty: Medium

Topics:
- Queue
- Breadth-First Search (BFS)
- Matrix
- Simulation

Approach:
- Put all initially rotten oranges into the queue.
- Process the queue level by level.
- During each minute, every rotten orange can rot
  its fresh neighbors in the four directions.
- Add newly rotten oranges to the queue.
- Count the remaining fresh oranges.
- If no fresh oranges remain, return the number of minutes.
- Otherwise, return -1.

Time Complexity:
O(m * n)

Space Complexity:
O(m * n)

Date:
2026-08-21
==================================================
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Solution
{
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;

        int fresh = 0;

        // Add all rotten oranges to the queue
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                }
                else if (grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }

        int minutes = 0;

        int directions[4][2] =
        {
            {-1, 0},  // Up
            {1, 0},   // Down
            {0, -1},  // Left
            {0, 1}    // Right
        };

        while (!q.empty() && fresh > 0)
        {
            int currentSize = q.size();

            for (int i = 0; i < currentSize; i++)
            {
                auto [r, c] = q.front();
                q.pop();

                for (auto& direction : directions)
                {
                    int newRow = r + direction[0];
                    int newCol = c + direction[1];

                    if (newRow >= 0 && newRow < rows &&
                        newCol >= 0 && newCol < cols &&
                        grid[newRow][newCol] == 1)
                    {
                        grid[newRow][newCol] = 2;
                        fresh--;

                        q.push({newRow, newCol});
                    }
                }
            }

            minutes++;
        }

        return fresh == 0 ? minutes : -1;
    }
};

