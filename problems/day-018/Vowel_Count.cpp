/*
==================================================
Problem: Vowel Count

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Loops
- Character Comparison

Approach:
Iterate through the string and check
whether each character is a vowel
(a, e, i, o, u).

Increase the counter whenever a vowel
is found, then return the total count.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-07-1
==================================================
*/
/*
==================================================
Problem: Vowel Count

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Loops
- Character Comparison

Approach:
Iterate through the string and check
whether each character is a vowel
(a, e, i, o, u).

Increase the counter whenever a vowel
is found, then return the total count.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-06-28
==================================================
*/

#include <string>

using namespace std;

int getCount(const string& inputStr)
{
    int num_vowels = 0;

    for (char c : inputStr)
    {
        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u')
        {
            num_vowels++;
        }
    }

    return num_vowels;
}