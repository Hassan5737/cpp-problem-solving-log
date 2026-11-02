
/*
==================================================
Problem: Defanging an IP Address

Platform: LeetCode
Problem Number: 1108

Difficulty: Easy

Topics:
- String

Approach:
- Create an empty result string.
- Iterate through each character in the IP address.
- Replace every dot '.' with "[.]".
- Append all other characters unchanged.
- Return the resulting string.

Time Complexity:
O(n), where n is the length of the IP address.

Space Complexity:
O(n), for storing the resulting string.

Date:
2026-11-02
==================================================
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


class Solution
{
public:
    string defangIPaddr(string address)
    {
        string result;

        for (char c : address)
        {
            if (c == '.')
            {
                result += "[.]";
            }
            else
            {
                result += c;
            }
        }

        return result;
    }
};
