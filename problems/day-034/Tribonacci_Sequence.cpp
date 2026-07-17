/*
==================================================
Problem: Tribonacci Sequence

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Dynamic Sequence
- Iteration

Approach:
1. Handle the edge case when n == 0.
2. Copy the first min(n, 3) elements from the signature.
3. Generate the remaining elements by summing the last
   three numbers already stored in the result vector.
4. Continue until the result contains n elements.
5. Return the result.

Time Complexity:
O(n)

Space Complexity:
O(n)

Notes:
The sequence starts with the given signature.
Each new element is the sum of the previous three elements.

Date:
2026-07-17
==================================================
*/

#include <vector>

using namespace std;

vector<int> tribonacci(vector<int> signature, int n)
{
    vector<int> result;

    if (n == 0)
    {
        return result;
    }

    for (int i = 0; i < n && i < 3; i++)
    {
        result.push_back(signature[i]);
    }

    for (int i = 3; i < n; i++)
    {
        result.push_back(
            result[i - 1] +
            result[i - 2] +
            result[i - 3]
        );
    }

    return result;
}