/*
==================================================
Problem: Isograms

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Character Processing
- Searching

Approach:
Traverse the string character by character.

Convert each character to lowercase to
ignore case differences.

Keep track of previously seen letters.

If a letter appears more than once,
return false immediately.

If the loop finishes without finding
duplicates, return true.

Time Complexity:
O(n²)
(using string::find)

Space Complexity:
O(n)

Date:
2026-06-24
==================================================
*/

#include <string>
#include <cctype>

bool is_isogram(const std::string& str)
{
    std::string seen_letters;

    for (char c : str)
    {
        c = std::tolower(c);

        if (seen_letters.find(c) != std::string::npos)
            return false;

        seen_letters += c;
    }

    return true;
}