/*
==================================================
Problem: Highest and Lowest

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- StringStream
- Min / Max

Approach:
Use stringstream to extract each integer
from the input string.

Track the minimum and maximum values
while iterating through the numbers.

Return the result as:
"highest lowest"

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-07-03
==================================================
*/

#include <string>
#include <sstream>
#include <climits>

using namespace std;

string highAndLow(const string& numbers)
{
    stringstream ss(numbers);

    int num;
    int highest = INT_MIN;
    int lowest = INT_MAX;

    while (ss >> num)
    {
        if (num > highest)
            highest = num;

        if (num < lowest)
            lowest = num;
    }

    return to_string(highest) + " " + to_string(lowest);
}