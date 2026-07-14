/*
==================================================
Problem: Duplicate Encoder

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Nested Loops
- Character Frequency
- Case-Insensitive Comparison

Approach:
1. Create a lowercase copy of the input string.
2. For each character:
   - Count how many times it appears using a nested loop.
   - If it appears once, append '('.
   - Otherwise, append ')'.
3. Return the encoded string.

Time Complexity:
O(n²)

Space Complexity:
O(n)

Notes:
Current Best Solution using the concepts studied so far.
Revisit after learning Hash Maps to improve to O(n).

Date:
2026-07-14
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

string duplicate_encoder(const string& word)
{
    string result;
    string word_small = word;

    // Convert the whole string to lowercase once
    for (int i = 0; i < word_small.size(); i++)
    {
        word_small[i] = tolower(word_small[i]);
    }

    for (int i = 0; i < word_small.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < word_small.size(); j++)
        {
            if (word_small[i] == word_small[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            result += '(';
        }
        else
        {
            result += ')';
        }
    }

    return result;
}