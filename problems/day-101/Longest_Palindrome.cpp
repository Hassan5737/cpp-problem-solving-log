/*
==================================================
Problem: Longest Palindrome

Platform: LeetCode
Problem Number: 409

Difficulty: Easy

Topics:
- String
- Hashing
- Counting
- Greedy

Approach:
- Count the frequency of every character.
- Use pairs of identical characters to build
  the palindrome.
- For each character, add the largest even
  number of occurrences that can be used.
- If any character has an odd frequency, one
  remaining character can be placed in the center.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-09-22
==================================================
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> frequency;
        int length = 0;
        bool hasOdd = false;

        for(char c : s)
        {
            frequency[c]++;
        }

        for(auto& pair : frequency)
        {
            length += (pair.second / 2) * 2;

            if(pair.second % 2 == 1)
            {
                hasOdd = true;
            }
        }

        if(hasOdd)
        {
            length++;
        }

        return length;
    }
};