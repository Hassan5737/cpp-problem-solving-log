/*
==================================================
Problem: Decode String

Platform: LeetCode
Problem Number: 394

Difficulty: Medium

Topics:
- Stack
- String
- Parsing
- Nested Structures

Approach:
- Use one stack for repetition counts.
- Use another stack for strings from outer levels.
- Build the current string while traversing the input.
- When a number is found, build the repetition count.
- When '[' is found, save the current string and count.
- When ']' is found, repeat the current string and
  append it to the string from the previous level.
- Regular characters are directly added to the current string.

Time Complexity:
O(n * k)
where k represents the amount of repetition in the decoded result.

Space Complexity:
O(n)

Date:
2026-08-30
==================================================
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    string decodeString(string s)
    {
        stack<int> counts;
        stack<string> strings;

        string current;
        int number = 0;

        for (char c : s)
        {
            if (isdigit(c))
            {
                number = number * 10 + (c - '0');
            }
            else if (c == '[')
            {
                counts.push(number);
                strings.push(current);

                number = 0;
                current = "";
            }
            else if (c == ']')
            {
                int repeat = counts.top();
                counts.pop();

                string previous = strings.top();
                strings.pop();

                for (int i = 0; i < repeat; i++)
                {
                    previous += current;
                }

                current = previous;
            }
            else
            {
                current += c;
            }
        }

        return current;
    }
};

