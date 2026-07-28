/*
==================================================
Problem: Unique In Order

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Arrays
- Strings
- Templates
- Vectors

Approach:
1. Create an empty result vector.
2. Traverse the sequence from left to right.
3. Add the current element if:
   - It is the first element, or
   - It is different from the previous element.
4. Return the resulting vector.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-07-28
==================================================
*/

#include <string>
#include <vector>
using namespace std;

template <typename T>
vector<T> uniqueInOrder(const vector<T>& iterable)
{
    vector<T> result;

    for (int i = 0; i < iterable.size(); i++)
    {
        if (i == 0 || iterable[i] != iterable[i - 1])
        {
            result.push_back(iterable[i]);
        }
    }

    return result;
}

vector<char> uniqueInOrder(const string& iterable)
{
    vector<char> result;

    for (int i = 0; i < iterable.size(); i++)
    {
        if (i == 0 || iterable[i] != iterable[i - 1])
        {
            result.push_back(iterable[i]);
        }
    }

    return result;
}