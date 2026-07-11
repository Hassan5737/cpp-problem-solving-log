/*
==================================================
Problem: Find The Parity Outlier

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Algorithms
- Parity
- Linear Search

Approach:
Determine whether the array is mostly even or
mostly odd by examining the first three elements.

If at least two of the first three numbers are
even, then the array is predominantly even.
Otherwise, it is predominantly odd.

Traverse the entire array and return the first
number whose parity differs from the majority.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-07-11
==================================================
*/

#include <vector>

using namespace std;

int FindOutlier(vector<int> arr)
{
    int evenCount = 0;

    // Determine the majority parity using the first three elements.
    for (size_t i = 0; i < 3; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    if (evenCount >= 2)
    {
        // Majority is even, find the only odd number.
        for (int number : arr)
        {
            if (number % 2 != 0)
            {
                return number;
            }
        }
    }
    else
    {
        // Majority is odd, find the only even number.
        for (int number : arr)
        {
            if (number % 2 == 0)
            {
                return number;
            }
        }
    }

    return 0; 
}