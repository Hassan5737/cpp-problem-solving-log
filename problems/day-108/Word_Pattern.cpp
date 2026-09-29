/*
==================================================
Problem: Word Pattern

Platform: LeetCode
Problem Number: 290

Difficulty: Easy

Topics:
- String
- Hashing
- Mapping
- Unordered Map

Approach:
- Split the input string into individual words.
- Check that the number of words matches the
  length of the pattern.
- Use two maps to maintain the relationship
  between pattern characters and words.
- Map each character to its corresponding word.
- Also map each word back to its corresponding
  character to ensure the mapping is one-to-one.
- Return false if any mapping conflict is found.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-09-29
==================================================
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> words;
        string word;
        stringstream ss(s);

        while(ss >> word)
        {
            words.push_back(word);
        }

        if(pattern.size() != words.size())
        {
            return false;
        }

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for(int i = 0; i < pattern.size(); i++)
        {
            char c = pattern[i];
            string currentWord = words[i];

            if(charToWord.count(c) &&
               charToWord[c] != currentWord)
            {
                return false;
            }

            if(wordToChar.count(currentWord) &&
               wordToChar[currentWord] != c)
            {
                return false;
            }

            charToWord[c] = currentWord;
            wordToChar[currentWord] = c;
        }

        return true;
    }
};