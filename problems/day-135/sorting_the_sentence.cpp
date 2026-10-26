
/*
==================================================
Problem: Sorting the Sentence

Platform: LeetCode
Problem Number: 1859

Difficulty: Easy

Topics:
- String
- Sorting

Approach:
- Use stringstream to split the sentence into words.
- Extract the last character of each word as its position.
- Remove the trailing digit from each word.
- Store each word at its correct position in a vector.
- Join the words with spaces and return the result.

Time Complexity:
O(n), where n is the length of the sentence.

Space Complexity:
O(n)

Date:
2026-10-26
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
    string sortSentence(string s)
    {
        stringstream ss(s);
        string word;

        vector<string> words(s.size());
        int wordCount = 0;

        while (ss >> word)
        {
            int position = word.back() - '0';

            word.pop_back();

            words[position - 1] = word;
            wordCount++;
        }

        string result;

        for (int i = 0; i < wordCount; i++)
        {
            if (i > 0)
            {
                result += " ";
            }

            result += words[i];
        }

        return result;
    }
};
