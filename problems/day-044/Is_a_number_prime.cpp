/*
==================================================
Problem: Is a number prime?

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Mathematics
- Loops
- Prime Numbers

Approach:
1. Return false if the number is less than or equal to 1.
2. Handle the special case where the number is 2.
3. Reject all even numbers greater than 2.
4. Check divisibility by odd numbers only up to sqrt(num).
5. If no divisor is found, the number is prime.

Time Complexity:
O(√n)

Space Complexity:
O(1)

Date:
2026-07-27
==================================================
*/


using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    if (num == 2)
        return true;

    if (num % 2 == 0)
        return false;

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}