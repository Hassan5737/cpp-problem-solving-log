/*
==================================================
Problem: Reverse String II

Platform: LeetCode
Problem Number: 541

Difficulty: Easy

Topics:
- String
- Two Pointers
- Simulation

Approach:
- Process the string in blocks of 2k characters.
- Reverse the first k characters of each block.
- Leave the remaining k characters unchanged.
- If fewer than k characters remain, reverse
  all of them.
- Use two pointers to reverse each required section.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-30
==================================================
*/


#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        for(int start = 0; start < s.size(); start += 2 * k)
        {
            int left = start;
            int right = min(start + k - 1, (int)s.size() - 1);

            while(left < right)
            {
                swap(s[left], s[right]);

                left++;
                right--;
            }
        }

        return s;
    }
};