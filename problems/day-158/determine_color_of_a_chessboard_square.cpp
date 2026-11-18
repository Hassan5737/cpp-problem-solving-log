
/*
==================================================
Problem: Determine Color of a Chessboard Square

Platform: LeetCode
Problem Number: 1812

Difficulty: Easy

Topics:
- Math
- String

Approach:
- Convert the column character into a zero-based index.
- Convert the row character into a zero-based index.
- Calculate the sum of both indices.
- The square is white if the sum is odd.
- Return the result.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-18
==================================================
*/

class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int column = coordinates[0] - 'a';
        int row = coordinates[1] - '1';

        return (column + row) % 2 == 1;
    }
};
