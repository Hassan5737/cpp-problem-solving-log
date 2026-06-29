/*
==================================================
Problem: Replace With Alphabet Position

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- ASCII
- Character Manipulation

Approach:
Iterate through the input string.

For each alphabetical character:
- Convert it to lowercase.
- Compute its alphabet position using:
  c - 'a' + 1
- Append the position to the result.

Ignore all non-alphabetical characters.
Separate numbers with a single space.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-29
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

string alphabet_position(const string &text)
{
    string result;

    for (char ch : text)
    {
        if (isalpha(ch))
        {
            char c = tolower(ch);
            int position = c - 'a' + 1;

            if (!result.empty())
                result += " ";

            result += to_string(position);
        }
    }

    return result;
}

