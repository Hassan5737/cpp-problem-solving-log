/*
==================================================
Problem: Binary Addition

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Mathematics
- Binary Representation
- Strings
- Loops

Approach:
First, calculate the sum of the two numbers.

Repeatedly divide the sum by 2:
- Store the remainder (0 or 1).
- Append it to the result string.

Since binary digits are generated from least
significant to most significant, reverse the
string before returning it.

Handle the special case when the sum is zero.

Time Complexity:
O(log n)

Space Complexity:
O(log n)

Date:
2026-07-09
==================================================
*/

#include <cstdint>
#include <string>
#include <algorithm>

using namespace std;

string add_binary(uint64_t a, uint64_t b)
{
    uint64_t sum = a + b;

    if (sum == 0)
    {
        return "0";
    }

    string result;

    while (sum > 0)
    {
        result += (sum % 2) + '0';
        sum /= 2;
    }

    reverse(result.begin(), result.end());

    return result;
}
