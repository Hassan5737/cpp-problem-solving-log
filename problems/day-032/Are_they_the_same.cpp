/*
==================================================
Problem: Are they the "same"?

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Sorting
- Comparison

Approach:
1. Check if both vectors have the same size.
2. Square every element in the first vector.
3. Sort both vectors.
4. Compare corresponding elements.
5. Return false on the first mismatch.
6. Return true if all elements match.

Time Complexity:
O(n log n)

Space Complexity:
O(1)
(ignoring the internal space used by std::sort)

Notes:
Using sorting simplifies the comparison and avoids an O(n²) solution.

Date:
2026-07-15
==================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

class Same
{
public:
    static bool comp(vector<int>& a, vector<int>& b)
    {
        if (a.size() != b.size())
        {
            return false;
        }

        for (int i = 0; i < a.size(); i++)
        {
            a[i] *= a[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }

        return true;
    }
};