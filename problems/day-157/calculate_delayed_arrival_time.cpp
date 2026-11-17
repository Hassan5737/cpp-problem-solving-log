
/*
==================================================
Problem: Calculate Delayed Arrival Time

Platform: LeetCode
Problem Number: 2651

Difficulty: Easy

Topics:
- Math

Approach:
- Add the delayed time to the original arrival time.
- Use modulo 24 to keep the result within the 24-hour clock.
- Return the calculated arrival time.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-17
==================================================
*/

class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        return (arrivalTime + delayedTime) % 24;
    }
};
