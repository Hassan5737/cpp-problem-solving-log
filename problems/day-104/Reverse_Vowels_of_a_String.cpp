/*
==================================================
Problem: Reverse Vowels of a String

Platform: LeetCode
Problem Number: 345

Difficulty: Easy

Topics:
- String
- Two Pointers
- Character Manipulation

Approach:
- Use two pointers starting from both ends
  of the string.
- Move the left pointer until it reaches a vowel.
- Move the right pointer until it reaches a vowel.
- Swap the two vowels.
- Continue moving both pointers toward the center.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-25
==================================================
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c);

        return c == 'a' ||
               c == 'e' ||
               c == 'i' ||
               c == 'o' ||
               c == 'u';
    }

    string reverseVowels(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {
            while(left < right && !isVowel(s[left]))
            {
                left++;
            }

            while(left < right && !isVowel(s[right]))
            {
                right--;
            }

            if(left < right)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};