/*
==================================================
Problem: Reverse Prefix of Word

Platform: LeetCode
Problem Number: 2000

Difficulty: Easy

Topics:
- Two Pointers
- String

Approach:
- Find the first occurrence of the given character.
- Reverse the substring from the beginning up to that position.
- Return the modified string.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-11-26
==================================================
*/

class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t pos = word.find(ch);

        if (pos == string::npos) {
            return word;
        }

        reverse(word.begin(), word.begin() + pos + 1);

        return word;
    }
};