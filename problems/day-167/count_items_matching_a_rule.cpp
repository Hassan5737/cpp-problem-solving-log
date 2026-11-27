/*
==================================================
Problem: Count Items Matching a Rule

Platform: LeetCode
Problem Number: 1773

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Iterate through all items.
- Check the value corresponding to the given ruleKey.
- Increment the counter whenever the item's value matches ruleValue.
- Return the total count.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-11-27
==================================================
*/

#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int index;

        if (ruleKey == "type") {
            index = 0;
        } else if (ruleKey == "color") {
            index = 1;
        } else {
            index = 2;
        }

        for (const auto& item : items) {
            if (item[index] == ruleValue) {
                count++;
            }
        }

        return count;
    }
};