
/*
==================================================
Problem: Final Value of Variable After Performing Operations

Platform: LeetCode
Problem Number: 2011

Difficulty: Easy

Topics:
- Array
- String
- Simulation

Approach:
- Initialize the variable's value to zero.
- Iterate through all operations.
- Check whether each operation represents an increment or decrement.
- Update the value accordingly.
- Return the final value.

Time Complexity:
O(n), where n is the number of operations.

Space Complexity:
O(1)

Date:
2026-11-07
==================================================
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


class Solution
{
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int result = 0;

        for (const string& operation : operations)
        {
            if (operation[1] == '+')
            {
                result++;
            }
            else
            {
                result--;
            }
        }

        return result;
    }
};
