/*
==================================================
Problem: Convert string to camel case

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Character Manipulation
- Iteration

Approach:
1. Create an empty result string.
2. Traverse the input string character by character.
3. If the current character is '-' or '_':
   - Set a flag to capitalize the next character.
4. Otherwise:
   - If the flag is set, append the uppercase version of the character.
   - Otherwise, append the character as it is.
5. Return the result string.

Time Complexity:
O(n)

Space Complexity:
O(n)

Notes:
Uses a boolean flag to determine when the next character
should be converted to uppercase.

Date:
2026-07-16
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

string to_camel_case(string text)
{
    string result;
    bool capitalizeNext = false;

    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == '-' || text[i] == '_')
        {
            capitalizeNext = true;
        }
        else
        {
            if (capitalizeNext)
            {
                result += toupper(text[i]);
                capitalizeNext = false;
            }
            else
            {
                result += text[i];
            }
        }
    }

    return result;
}