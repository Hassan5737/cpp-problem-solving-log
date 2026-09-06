/*
==================================================
Problem: Reverse String

Platform: LeetCode
Problem Number: 344

Difficulty: Easy

Topics:
- String
- Two Pointers

Approach:
- Use two pointers, one at the beginning and
  one at the end of the string.
- Swap the characters at both positions.
- Move the pointers toward the center.
- Continue until the pointers meet.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-06
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {
            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};