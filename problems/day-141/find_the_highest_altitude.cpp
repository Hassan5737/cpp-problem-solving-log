/*
==================================================
Problem: Find the Highest Altitude

Platform: LeetCode
Problem Number: 1732

Difficulty: Easy

Topics:
- Array
- Prefix Sum

Approach:
- Start from altitude 0.
- Keep track of the current altitude while traversing the gain array.
- Update the maximum altitude whenever the current altitude becomes higher.
- Return the highest altitude reached.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-11-01
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int>& gain)
    {
        int currentAltitude = 0;
        int highestAltitude = 0;

        for (int change : gain)
        {
            currentAltitude += change;
            highestAltitude = max(highestAltitude, currentAltitude);
        }

        return highestAltitude;
    }
};