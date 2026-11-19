
/*
==================================================
Problem: Buy Two Chocolates

Platform: LeetCode
Problem Number: 2706

Difficulty: Easy

Topics:
- Array
- Sorting

Approach:
- Find the two smallest prices in the array.
- Calculate their total cost.
- If the total cost is within the available money, return the remaining amount.
- Otherwise, return the original amount of money.

Time Complexity:
O(n), where n is the number of prices.

Space Complexity:
O(1)

Date:
2026-11-19
==================================================
*/
#include<vector>
using namespace std;

class Solution
{
public:
    int buyChoco(vector<int>& prices, int money)
    {
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        for (int price : prices)
        {
            if (price < firstMin)
            {
                secondMin = firstMin;
                firstMin = price;
            }
            else if (price < secondMin)
            {
                secondMin = price;
            }
        }

        int totalCost = firstMin + secondMin;

        return totalCost <= money ? money - totalCost : money;
    }
};
