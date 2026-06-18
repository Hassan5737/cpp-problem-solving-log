/*
==================================================
Problem: Find the Missing Letter

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Characters
- ASCII Values
- Loops
- Logic

Approach:
Traverse the array of consecutive letters.
For each character, check whether the next
character is exactly one position ahead in
the alphabet.

If the expected next character does not
match the actual next character, the missing
letter is the expected one and can be
returned immediately.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-06-18
==================================================
*/

#include <vector>

using namespace std;

char findMissingLetter(const vector<char>& chars)
{
    for (size_t i = 0; i < chars.size() - 1; i++)
    {
        if (chars[i] + 1 != chars[i + 1])
        {
            return chars[i] + 1;
        }
    }

    return ' ';
}