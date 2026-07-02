/*
==================================================
Problem: Word Values

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Arrays
- ASCII

Approach:
For each string:
- Ignore spaces.
- Convert each letter to its alphabet position
  using (c - 'a' + 1).
- Sum all letter values.
- Multiply the sum by the word's position
  in the input array (starting from 1).
- Store the result.

Time Complexity:
O(n × m)

Space Complexity:
O(n)

Date:
2026-07-02
==================================================
*/

#include <vector>
#include <string>

using namespace std;

vector<int> wordValue(const vector<string>& arr)
{
    vector<int> result;

    for (size_t i = 0; i < arr.size(); i++)
    {
        int sum = 0;

        for (char c : arr[i])
        {
            if (c != ' ')
            {
                sum += c - 'a' + 1;
            }
        }

        result.push_back(sum * (i + 1));
    }

    return result;
}