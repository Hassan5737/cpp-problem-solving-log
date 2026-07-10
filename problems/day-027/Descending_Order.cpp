/*
==================================================
Problem: Descending Order

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Sorting
- STL

Approach:
Convert the number to a string.

Sort the digits in descending order using
the STL sort function with greater<char>().

Convert the sorted string back to an
unsigned integer and return it.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

Date:
2026-07-10
==================================================
*/

#include <cinttypes>
#include <string>
#include <algorithm>

using namespace std;

uint64_t descendingOrder(uint64_t a)
{
    string number = to_string(a);

    sort(number.begin(), number.end(), greater<char>());

    return stoull(number);
}