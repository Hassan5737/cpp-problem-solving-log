/*
==================================================
Problem: Best Time to Buy and Sell Stock

Platform: LeetCode
Problem Number: 121

Difficulty: Easy

Topics:
- Array
- Greedy

Approach:
- Keep track of the minimum price seen so far.
- For each price, calculate the profit if we sell
  on that day.
- Keep the maximum profit found.
- Update the minimum price whenever a lower price
  is encountered.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-05
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - minPrice);

            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};