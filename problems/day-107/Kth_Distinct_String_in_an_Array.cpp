/*
==================================================
Problem: Kth Distinct String in an Array

Platform: LeetCode
Problem Number: 2053

Difficulty: Easy

Topics:
- Array
- String
- Hashing
- Counting
- Unordered Map

Approach:
- Count the frequency of every string using
  an unordered_map.
- Traverse the array again while preserving
  the original order.
- Whenever a string appears exactly once,
  decrease k.
- When k reaches zero, return that string.
- Return an empty string if fewer than k distinct
  strings exist.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-09-28
==================================================
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string kthDistinct(vector<string>& arr, int k)
    {
        unordered_map<string, int> frequency;

        for(string word : arr)
        {
            frequency[word]++;
        }

        for(string word : arr)
        {
            if(frequency[word] == 1)
            {
                k--;

                if(k == 0)
                {
                    return word;
                }
            }
        }

        return "";
    }
};