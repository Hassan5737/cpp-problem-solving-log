/*
==================================================
Problem: Group Anagrams

Platform: LeetCode
Problem Number: 49

Difficulty: Medium

Topics:
- Array
- String
- Hashing
- Unordered Map
- Sorting

Approach:
- Use an unordered_map to group anagrams.
- Sort the characters of each word to create
  a common key for all anagrams.
- Store each word in the group associated with
  its sorted key.
- Convert the map values into the final result.

Time Complexity:
O(n * k log k)
where n is the number of strings and k is the
average length of a string.

Space Complexity:
O(n * k)

Date:
2026-09-11
==================================================
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> groups;

        for(string str : strs)
        {
            string key = str;
            sort(key.begin(), key.end());

            groups[key].push_back(str);
        }

        vector<vector<string>> result;

        for(auto& group : groups)
        {
            result.push_back(group.second);
        }

        return result;
    }
};