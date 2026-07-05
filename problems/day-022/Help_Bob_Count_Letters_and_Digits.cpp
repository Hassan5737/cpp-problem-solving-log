/*
==================================================
Problem: Help Bob Count Letters and Digits

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Character Classification
- Loops

Approach:
Iterate through each character in the string.

If the character is an alphabetic letter
(using isalpha) or a digit (using isdigit),
increase the counter.

Ignore all other characters.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-07-05
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

int countLettersAndDigits(string input)
{
    int count = 0;

    for (char c : input)
    {
        if (isalpha(c) || isdigit(c))
        {
            count++;
        }
    }

    return count;
}
