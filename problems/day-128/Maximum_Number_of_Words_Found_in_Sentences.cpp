
/*
==================================================
Problem: Maximum Number of Words Found in Sentences

Platform: LeetCode
Problem Number: 2114

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Iterate through each sentence.
- Count the spaces in the sentence.
- Calculate the number of words as spaces + 1.
- Update the maximum word count.
- Return the maximum count.

Time Complexity:
O(n * m), where n is the number of sentences
and m is the maximum sentence length.

Space Complexity:
O(1)

Date:
2026-10-19
==================================================
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int maxWords = 0;

        for (const string& sentence : sentences)
        {
            int words = 1;

            for (char ch : sentence)
            {
                if (ch == ' ')
                {
                    words++;
                }
            }

            if (words > maxWords)
            {
                maxWords = words;
            }
        }

        return maxWords;
    }
};
