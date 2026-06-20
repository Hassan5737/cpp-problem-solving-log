/*
==================================================
Problem: Split Strings

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Arrays
- Loops
- Edge Cases

Approach:
Traverse the string two characters at a time.

If a complete pair exists, add it directly
to the result vector.

If only one character remains at the end,
append an underscore to create the final pair.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-20
==================================================
*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(const string &s)
{
    std::vector<string> result;
    size_t n = s.length();

    for (size_t i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            result.push_back(s.substr(i, 2));
        else
            result.push_back(string(1, s[i]) + '_');
    }

    return result;
}