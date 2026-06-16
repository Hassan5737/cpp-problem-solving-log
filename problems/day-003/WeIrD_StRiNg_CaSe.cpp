/*
==================================================
Problem: WeIrD StRiNg CaSe

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Character Processing
- String Traversal

Approach:
Traverse the string while tracking the
character index inside each word.
Convert characters at even positions
to uppercase and characters at odd
positions to lowercase. Reset the
index whenever a space is encountered.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-16
==================================================
*/

#include <string>
#include <string_view>
#include <cctype>

std::string to_weird_case(std::string_view str)
{
    std::string result;
    int index = 0;

    for (char c : str)
    {
        if (c == ' ')
        {
            result += ' ';
            index = 0;
        }
        else
        {
            if (index % 2 == 0)
            {
                result += static_cast<char>(toupper(c));
            }
            else
            {
                result += static_cast<char>(tolower(c));
            }

            index++;
        }
    }

    return result;
}