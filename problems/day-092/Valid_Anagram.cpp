/*
==================================================
Problem: Valid Anagram

Platform: LeetCode
Problem Number: 242

Difficulty: Easy

Topics:
- String
- Hashing
- Counting
- Unordered Map

Approach:
- Use an unordered_map to count the frequency
  of each character in the first string.
- Traverse the second string and decrease the
  corresponding character frequency.
- If a frequency becomes negative, the strings
  cannot be anagrams.
- Return true if all character frequencies match.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-09-13
==================================================
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if(s.size() != t.size())
        {
            return false;
        }

        unordered_map<char, int> count;

        for(char c : s)
        {
            count[c]++;
        }

        for(char c : t)
        {
            count[c]--;

            if(count[c] < 0)
            {
                return false;
            }
        }

        return true;
    }
};