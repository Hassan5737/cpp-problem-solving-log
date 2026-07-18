/*
==================================================
Problem: Counting Duplicates

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Nested Loops
- Character Frequency

Approach:
1. Convert the entire string to lowercase.
2. Traverse each character in the string.
3. Skip the character if it has already appeared before.
4. Count how many times the current character appears.
5. If it appears more than once, increment the duplicate counter.
6. Return the number of distinct duplicated characters.

Time Complexity:
O(n²)

Space Complexity:
O(n)

Notes:
This solution uses nested loops only.
It avoids counting the same duplicated character more than once.

Date:
2026-07-18
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

size_t duplicateCount(const string& in)
{
    string text = in;

    for (char& c : text)
    {
        c = tolower(c);
    }

    size_t duplicates = 0;

    for (int i = 0; i < text.size(); i++)
    {
        bool alreadyCounted = false;

        for (int k = 0; k < i; k++)
        {
            if (text[k] == text[i])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        int count = 0;

        for (int j = 0; j < text.size(); j++)
        {
            if (text[i] == text[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            duplicates++;
        }
    }

    return duplicates;
}