/*
==================================================
Problem: Task Scheduler

Platform: LeetCode
Problem Number: 621

Difficulty: Medium

Topics:
- Array
- Hash Table
- Greedy
- Sorting
- Scheduling

Approach:
- Count the frequency of each task.
- Find the maximum frequency.
- Calculate the minimum number of time slots needed
  based on the cooldown between the most frequent tasks.
- The answer cannot be smaller than the total number
  of tasks.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-08-26
==================================================
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        vector<int> frequency(26, 0);

        for (char task : tasks)
        {
            frequency[task - 'A']++;
        }

        int maxFrequency = *max_element(
            frequency.begin(),
            frequency.end()
        );

        int maxFrequencyCount = 0;

        for (int count : frequency)
        {
            if (count == maxFrequency)
            {
                maxFrequencyCount++;
            }
        }

        int intervals =
            (maxFrequency - 1) * (n + 1) + maxFrequencyCount;

        return max(static_cast<int>(tasks.size()), intervals);
    }
};
