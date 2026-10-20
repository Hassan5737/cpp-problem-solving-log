
/*
==================================================
Problem: Jewels and Stones

Platform: LeetCode
Problem Number: 771

Difficulty: Easy

Topics:
- String
- Hashing

Approach:
- Iterate through each character in stones.
- Check whether the character exists in jewels.
- Increment the count if it is a jewel.
- Return the total count.

Time Complexity:
O(n * m), where n is the length of stones
and m is the length of jewels.

Space Complexity:
O(1)

Date:
2026-10-20
==================================================
*/

#include<string>
using namespace std;


class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int count = 0;

        for (char stone : stones)
        {
            if (jewels.find(stone) != string::npos)
            {
                count++;
            }
        }

        return count;
    }
};
