
/*
==================================================
Problem: Truncate Sentence

Platform: LeetCode
Problem Number: 1816

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Use stringstream to split the sentence into words.
- Extract the first k words from the sentence.
- Join the selected words with spaces.
- Return the resulting sentence.

Time Complexity:
O(n), where n is the length of the sentence.

Space Complexity:
O(n), for storing the extracted words and result.

Date:
2026-10-28
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
    string truncateSentence(string s, int k)
    {
        stringstream ss(s);
        string word;
        string result;

        for (int i = 0; i < k; i++)
        {
            ss >> word;

            if (i > 0)
            {
                result += " ";
            }

            result += word;
        }

        return result;
    }
};
