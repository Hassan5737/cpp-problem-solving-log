
/*
==================================================
Problem: Count the Number of Consistent Strings

Platform: LeetCode
Problem Number: 1684

Difficulty: Easy

Topics:
- Array
- Hash Table
- String

Approach:
- Create a boolean array of size 26 to track allowed characters.
- Mark each character in the allowed string.
- Iterate through all words.
- Check whether every character in each word is allowed.
- Count and return the number of consistent words.

Time Complexity:
O(a + n * m), where:
- a is the length of the allowed string.
- n is the number of words.
- m is the maximum length of a word.

Space Complexity:
O(1), since the tracking array always contains 26 elements.

Date:
2026-11-21
==================================================
*/

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string>& words)
    {
        bool isAllowed[26] = {false};

        for (char c : allowed)
        {
            isAllowed[c - 'a'] = true;
        }

        int count = 0;

        for (const string& word : words)
        {
            bool consistent = true;

            for (char c : word)
            {
                if (!isAllowed[c - 'a'])
                {
                    consistent = false;
                    break;
                }
            }

            if (consistent)
            {
                count++;
            }
        }

        return count;
    }
};
