/*
==================================================
Problem: Valid Palindrome

Platform: LeetCode
Problem Number: 125

Difficulty: Easy

Topics:
- String
- Two Pointers
- Character Manipulation

Approach:
- Use two pointers starting from both ends of
  the string.
- Skip non-alphanumeric characters.
- Compare characters without considering case.
- Move both pointers toward the center.
- Return false if any pair of characters differs.
- Return true if all valid characters match.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-20
==================================================
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {
            while(left < right && !isalnum(s[left]))
            {
                left++;
            }

            while(left < right && !isalnum(s[right]))
            {
                right--;
            }

            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};