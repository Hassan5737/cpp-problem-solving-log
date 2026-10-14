
/*
==================================================
Problem: Subtract the Product and Sum of Digits of an Integer

Platform: LeetCode
Problem Number: 1281

Difficulty: Easy

Topics:
- Math
- Simulation

Approach:
- Extract each digit using the modulo operator.
- Multiply the digits and calculate their sum.
- Remove the last digit using integer division.
- Return the product minus the sum.

Time Complexity:
O(d), where d is the number of digits.

Space Complexity:
O(1)

Date:
2026-10-14
==================================================
*/


class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;

            product *= digit;
            sum += digit;

            n /= 10;
        }

        return product - sum;
    }
};
