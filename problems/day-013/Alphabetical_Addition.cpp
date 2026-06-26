/*
==================================================
Problem: Alphabetical Addition

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Characters
- ASCII
- Mathematics

Approach:
Treat each letter as a value from 1 to 26.

Sum all letter values, wrap around the
alphabet using modulo 26, then convert
the final value back to a character.

If the input is empty, return 'z'.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-06-26
==================================================
*/

#include <vector>
using namespace std;

char add_letters(vector<char> letters)
{
    if (letters.empty())
        return 'z';

    int sum = 0;

    for (char letter : letters)
    {
        sum += (letter - 'a' + 1);
    }

    sum %= 26;

    if (sum == 0)
        return 'z';

    return 'a' + sum - 1;
}