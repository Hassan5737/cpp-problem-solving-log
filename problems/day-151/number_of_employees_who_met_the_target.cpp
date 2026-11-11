
/*
==================================================
Problem: Number of Employees Who Met the Target

Platform: LeetCode
Problem Number: 2798

Difficulty: Easy

Topics:
- Array

Approach:
- Iterate through the hours array.
- Check if each employee worked at least the target number of hours.
- Increment the count for every employee who meets the target.
- Return the final count.

Time Complexity:
O(n), where n is the number of employees.

Space Complexity:
O(1)

Date:
2026-11-11
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target)
    {
        int count = 0;

        for (int hour : hours)
        {
            if (hour >= target)
            {
                count++;
            }
        }

        return count;
    }
};
