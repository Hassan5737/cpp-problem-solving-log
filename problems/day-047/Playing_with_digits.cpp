/*
==================================================
Problem: Playing with Digits (Dig Pow)

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Mathematics
- Strings
- Loops
- Power Function

Approach:
1. Convert the number to a string.
2. Traverse each digit from left to right.
3. Raise each digit to the current power.
4. Increment the power after every digit.
5. Sum all results.
6. If the sum is divisible by the original number, return k.
7. Otherwise, return -1.

Time Complexity:
O(d)

Space Complexity:
O(d)

Where d is the number of digits.

Date:
2026-07-30
==================================================
*/

#include <string>
#include <cmath>

using namespace std;

class DigPow
{
public:
    static int digPow(int n, int p)
    {
        string number = to_string(n);

        long long sum = 0;

        for (char digit : number)
        {
            sum += pow(digit - '0', p);
            p++;
        }

        if (sum % n == 0)
            return sum / n;

        return -1;
    }
};