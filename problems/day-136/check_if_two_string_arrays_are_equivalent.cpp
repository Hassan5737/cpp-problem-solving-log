
/*
==================================================
Problem: Check If Two String Arrays are Equivalent

Platform: LeetCode
Problem Number: 1662

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Concatenate all strings in the first array into one string.
- Concatenate all strings in the second array into another string.
- Compare the two resulting strings.
- Return true if they are equal, otherwise return false.

Time Complexity:
O(n + m), where n and m are the total lengths of the two arrays.

Space Complexity:
O(n + m), for storing the concatenated strings.

Date:
2026-10-27
==================================================
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        string s1;
        string s2;

        for (const string& word : word1)
        {
            s1 += word;
        }

        for (const string& word : word2)
        {
            s2 += word;
        }

        return s1 == s2;
    }
};
