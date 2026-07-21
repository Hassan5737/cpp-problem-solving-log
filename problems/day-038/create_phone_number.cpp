/*
==================================================
Problem: Create Phone Number

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Arrays
- Character Manipulation

Approach:
1. Create an empty phone number string starting with '('.
2. Traverse the array of digits.
3. Convert each integer digit to its character equivalent.
4. Insert ") " after the third digit.
5. Insert "-" after the sixth digit.
6. Return the formatted phone number.

Time Complexity:
O(1)

Space Complexity:
O(1)

Notes:
The array always contains exactly 10 digits, so the
running time is constant.

Date:
2026-07-21
==================================================
*/


#include <string>

using namespace std;

string createPhoneNumber(const int arr[10])
{
    string phone = "(";

    for (int i = 0; i < 10; i++)
    {
        phone += char(arr[i] + '0');

        if (i == 2)
        {
            phone += ") ";
        }
        else if (i == 5)
        {
            phone += "-";
        }
    }

    return phone;
}