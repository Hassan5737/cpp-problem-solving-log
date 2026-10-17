
/*
==================================================
Problem: Count the Digits That Divide a Number

Platform: LeetCode
Problem Number: 2520

Difficulty: Easy

Topics:
- Math
- Number Manipulation

Approach:
- Extract each digit using num % 10.
- Check whether the digit divides the original number evenly.
- Increment the counter when the remainder is zero.
- Remove the last digit using num /= 10.
- Return the total count.

Time Complexity:
O(d), where d is the number of digits in num.

Space Complexity:
O(1)

Date:
2026-10-17
==================================================
*/

class Solution
{
public:
    int countDigits(int num)
    {
        int originalNum = num;
        int count = 0;

        while (num > 0)
        {
            int digit = num % 10;

            if (originalNum % digit == 0)
            {
                count++;
            }

            num /= 10;
        }

        return count;
    }
};
