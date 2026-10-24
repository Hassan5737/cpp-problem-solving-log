
/*
==================================================
Problem: Element Appearing More Than 25% In Sorted Array

Platform: LeetCode
Problem Number: 1287

Difficulty: Easy

Topics:
- Array
- Counting

Approach:
- Calculate the minimum frequency required to exceed 25%.
- Iterate through the sorted array.
- Count consecutive occurrences of each element.
- Return the element whose frequency exceeds 25% of the array size.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-24
==================================================
*/

#include <vector>
using namespace std;

class Solution
{
public:
    int findSpecialInteger(vector<int>& arr)
    {
        int n = arr.size();
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            if (count * 4 > n)
            {
                return arr[i];
            }
        }

        return arr[0];
    }
};
