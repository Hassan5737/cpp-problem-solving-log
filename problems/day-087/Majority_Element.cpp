/*
==================================================
Problem: Majority Element

Platform: LeetCode
Problem Number: 169

Difficulty: Easy

Topics:
- Array
- Greedy

Approach:
- Use the Boyer-Moore Voting Algorithm.
- Keep a candidate element and a counter.
- Increase the counter when the current element
  matches the candidate.
- Decrease it otherwise.
- When the counter reaches zero, choose the current
  element as the new candidate.
- Since a majority element is guaranteed to exist,
  the final candidate is the majority element.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-08
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        int candidate = 0;
        int count = 0;

        for(int num : nums)
        {
            if(count == 0)
            {
                candidate = num;
            }

            if(num == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }
};