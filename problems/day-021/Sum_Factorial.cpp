/*
==================================================
Problem: Sum Factorial

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Mathematics
- Loops
- Functions

Approach:
Create a helper function to compute the
factorial of a number.

Iterate through the input vector, compute
the factorial of each value, and add it
to the final sum.

Return the accumulated sum.

Time Complexity:
O(n × m)

where:
n = number of elements
m = largest factorial input

Space Complexity:
O(1)

Date:
2026-07-04
==================================================
*/

#include <vector>

using namespace std;

unsigned long long factorial(int n)
{
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

unsigned long long sum_factorial(vector<int> vi)
{
    unsigned long long sum = 0;

    for (int num : vi)
    {
        sum += factorial(num);
    }

    return sum;
}