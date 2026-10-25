
/*
==================================================
Problem: Matrix Diagonal Sum

Platform: LeetCode
Problem Number: 1572

Difficulty: Easy

Topics:
- Array
- Matrix

Approach:
- Iterate through each row of the square matrix.
- Add the primary diagonal element mat[i][i].
- Add the secondary diagonal element mat[i][n - 1 - i].
- Avoid counting the center element twice when n is odd.
- Return the total diagonal sum.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-25
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>>& mat)
    {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i];
            sum += mat[i][n - 1 - i];
        }

        if (n % 2 != 0)
        {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};
