/*
==================================================
Problem: Isomorphic Strings

Platform: LeetCode
Problem Number: 205

Difficulty: Easy

Topics:
- String
- Hashing
- Mapping
- Unordered Map

Approach:
- Use two maps to maintain the character mapping
  in both directions.
- Map each character from string s to its
  corresponding character in string t.
- Also map each character from t back to s.
- If an existing mapping conflicts in either
  direction, the strings are not isomorphic.
- Return true if all character mappings are valid.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-09-17
==================================================
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for(int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            char b = t[i];

            if(sToT.count(a) && sToT[a] != b)
            {
                return false;
            }

            if(tToS.count(b) && tToS[b] != a)
            {
                return false;
            }

            sToT[a] = b;
            tToS[b] = a;
        }

        return true;
    }
};