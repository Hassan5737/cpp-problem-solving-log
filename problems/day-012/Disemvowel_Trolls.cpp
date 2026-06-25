/*
==================================================
Problem: Disemvowel Trolls

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Character Processing
- Filtering

Approach:
Traverse the input string character by character.

For each character, check whether it is
a vowel (a, e, i, o, u in both cases).

If it is not a vowel, append it to the
result string.

Return the final filtered string.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-25
==================================================
*/

#include <string>

using namespace std;

string disemvowel(const string& str)
{
    string result;
    string vowels = "aeiouAEIOU";

    for (char c : str)
    {
        if (vowels.find(c) == string::npos)
        {
            result += c;
        }
    }

    return result;
}