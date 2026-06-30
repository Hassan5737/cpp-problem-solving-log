/*
==================================================
Problem: Persistent Bugger

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Mathematics
- Digits
- Loops

Approach:
Repeatedly multiply all digits of the number
until it becomes a single-digit number.

For each iteration:
- Extract digits using modulo (% 10).
- Remove the last digit using integer division (/= 10).
- Multiply all digits together.
- Count each multiplication round.

Return the total number of rounds.

Time Complexity:
O(d × k)

where:
d = number of digits
k = persistence (number of iterations)

Space Complexity:
O(1)

Date:
2026-06-28
==================================================
*/

int persistence(long long n)
{
    int count = 0;

    while (n >= 10)
    {
        long long product = 1;

        while (n > 0)
        {
            int digit = n % 10;
            product *= digit;
            n /= 10;
        }

        n = product;
        count++;
    }

    return count;
}