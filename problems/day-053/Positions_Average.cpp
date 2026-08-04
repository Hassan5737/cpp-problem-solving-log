/*
==================================================
Problem: Positions Average

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Parsing
- Nested Loops
- Combinatorics

Approach:
1. Split the input string into individual substrings using ','.
2. Remove the leading space from each substring.
3. Compare every unique pair of substrings.
4. Count how many character positions match.
5. Count the total number of comparisons.
6. Compute:
   percentage = (matching positions / total positions compared) * 100.
7. Return the percentage as a double.

Time Complexity:
O(n² × m)

n = number of substrings
m = length of each substring

Space Complexity:
O(n × m)

Date:
2026-08-05
==================================================
*/

#include <string>
#include <vector>
#include <sstream>

using namespace std;

double posAverage(const string &s)
{
    vector<string> arr;
    string temp;
    stringstream ss(s);

    while (getline(ss, temp, ','))
    {
        if (!temp.empty() && temp[0] == ' ')
            temp.erase(0, 1);

        arr.push_back(temp);
    }

    int totalMatches = 0;
    int comparisons = 0;
    int len = arr[0].size();

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            comparisons++;

            for (int k = 0; k < len; k++)
            {
                if (arr[i][k] == arr[j][k])
                    totalMatches++;
            }
        }
    }

    return (100.0 * totalMatches) / (comparisons * len);
}