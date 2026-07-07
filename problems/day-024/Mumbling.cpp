/*
==================================================
Problem: Mumbling

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Character Manipulation
- Loops

Approach:
Iterate through each character in the string.

For each character:
- Add its uppercase version once.
- Append its lowercase version as many times
  as its index.
- Separate each generated group with a hyphen,
  except after the last group.

Time Complexity:
O(n²)

Space Complexity:
O(n²)

Date:
2026-07-07
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

class Accumul
{
public:
    static string accum(const string &s)
    {
        string result;

        for (int i = 0; i < s.size(); i++)
        {
            result += toupper(s[i]);

            for (int j = 0; j < i; j++)
            {
                result += tolower(s[i]);
            }

            if (i != s.size() - 1)
            {
                result += '-';
            }
        }

        return result;
    }
};
