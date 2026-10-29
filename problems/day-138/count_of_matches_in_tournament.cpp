
/*
==================================================
Problem: Count of Matches in Tournament

Platform: LeetCode
Problem Number: 1688

Difficulty: Easy

Topics:
- Math
- Simulation

Approach:
- Observe that each match eliminates exactly one team.
- Continue until only one team remains.
- The total number of matches is n - 1.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-10-29
==================================================
*/

class Solution
{
public:
    int numberOfMatches(int n)
    {
        return n - 1;
    }
};
