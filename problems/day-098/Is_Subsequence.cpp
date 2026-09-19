/*
==================================================
Problem: Is Subsequence

Platform: LeetCode
Problem Number: 392

Difficulty: Easy

Topics:
- String
- Two Pointers

Approach:
- Use one pointer for string s.
- Traverse string t using another pointer.
- Whenever the current character in t matches
  the current character in s, move the pointer
  in s forward.
- If all characters in s are matched in order,
  then s is a subsequence of t.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-19
==================================================
*/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0;

        for(int j = 0; j < t.size(); j++)
        {
            if(i < s.size() && s[i] == t[j])
            {
                i++;
            }
        }

        return i == s.size();
    }
};

