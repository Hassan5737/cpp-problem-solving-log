/*
==================================================
Problem: Length of Last Word

Platform: LeetCode
Problem Number: 58

Difficulty: Easy

Topics:
- String

Approach:
- Start from the end of the string.
- Skip trailing spaces.
- Count characters until reaching a space
  or the beginning of the string.
- Return the length of the last word.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-27
==================================================
*/
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.size() - 1;

        while(i >= 0 && s[i] == ' ')
        {
            i--;
        }

        int length = 0;

        while(i >= 0 && s[i] != ' ')
        {
            length++;
            i--;
        }

        return length;
    }
};