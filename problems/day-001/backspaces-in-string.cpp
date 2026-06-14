/*
==================================================
Problem: Backspaces in String

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Character Processing
- Simulation

Approach:
Traverse the input string and build the result.
For each regular character, append it to the
result string. For each '#', remove the most
recent valid character if one exists.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-14
==================================================
*/

#include <string>

using namespace std;

string cleanString(const string& s)
{
    string result;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '#')
        {
            result += s[i];
        }
        else if (!result.empty())
        {
            result.pop_back();
        }
    }

    return result;
}