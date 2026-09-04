/*
==================================================
Problem: Reverse Words in a String III

Platform: LeetCode
Problem Number: 557

Difficulty: Easy

Topics:
- String
- Character Manipulation

Approach:
- Traverse the string word by word.
- Reverse the characters of each word in-place.
- Keep the order of the words unchanged.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-04
==================================================
*/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int start = 0;

        for(int i = 0; i <= s.size(); i++)
        {
            if(i == s.size() || s[i] == ' ')
            {
                int left = start;
                int right = i - 1;

                while(left < right)
                {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                start = i + 1;
            }
        }

        return s;
    }
};