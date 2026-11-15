
/*
==================================================
Problem: Count the Number of Vowel Strings in Range

Platform: LeetCode
Problem Number: 2586

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Iterate through the words within the given range.
- Check whether the first and last characters are vowels.
- Count the words that satisfy both conditions.
- Return the final count.

Time Complexity:
O(n), where n is the number of words in the given range.

Space Complexity:
O(1)

Date:
2026-11-15
==================================================
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
private:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }

public:
    int vowelStrings(vector<string>& words, int left, int right)
    {
        int count = 0;

        for (int i = left; i <= right; i++)
        {
            if (isVowel(words[i].front()) && isVowel(words[i].back()))
            {
                count++;
            }
        }

        return count;
    }
};
