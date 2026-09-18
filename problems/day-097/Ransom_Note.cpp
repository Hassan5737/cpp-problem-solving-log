/*
==================================================
Problem: Ransom Note

Platform: LeetCode
Problem Number: 383

Difficulty: Easy

Topics:
- String
- Hashing
- Counting
- Unordered Map

Approach:
- Count the frequency of each character in
  the magazine string.
- Traverse the ransom note.
- For each character, check if it is available
  in the magazine.
- Decrease its frequency after using it.
- Return false if a required character is
  unavailable.
- Return true if the ransom note can be constructed.

Time Complexity:
O(n + m)

Space Complexity:
O(n)

Date:
2026-09-18
==================================================
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> frequency;

        for(char c : magazine)
        {
            frequency[c]++;
        }

        for(char c : ransomNote)
        {
            if(frequency[c] == 0)
            {
                return false;
            }

            frequency[c]--;
        }

        return true;
    }
};