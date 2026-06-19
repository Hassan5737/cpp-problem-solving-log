/*
==================================================
Problem: Who Likes It?

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Conditions
- Formatting
- Edge Cases

Approach:
Check the number of names and build the
corresponding output string according to
the required format.

Handle each possible case separately:
0 names, 1 name, 2 names, 3 names, and
4 or more names.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-06-19
==================================================
*/

#include <string>
#include <vector>
using namespace std;

string likes(const vector<string> &names)
{
    int n = names.size();

    if (n == 0)
        return "no one likes this";
    else if (n == 1)
        return names[0] + " likes this";
    else if (n == 2)
        return names[0] + " and " + names[1] + " like this";
    else if (n == 3)
        return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    else
        return names[0] + ", " + names[1] + " and " + to_string(n - 2) + " others like this";
}