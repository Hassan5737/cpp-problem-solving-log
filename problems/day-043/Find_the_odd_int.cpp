/*
==================================================
Problem: Find the odd int

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Nested Loops
- Counting

Approach:
1. Traverse each element in the array.
2. Count how many times it appears.
3. If the count is odd, return that element.

Time Complexity:
O(n²)

Space Complexity:
O(1)

Date:
2026-07-26
==================================================
*/



#include <vector>
using namespace std;

int findOdd(const vector<int>& numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < numbers.size(); j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }

        if (count % 2 != 0)
        {
            return numbers[i];
        }
    }

    return 0;
}