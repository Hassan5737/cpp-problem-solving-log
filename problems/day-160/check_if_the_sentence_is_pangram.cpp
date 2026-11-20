
/*
==================================================
Problem: Check if the Sentence Is Pangram

Platform: LeetCode
Problem Number: 1832

Difficulty: Easy

Topics:
- String
- Hash Table

Approach:
- Create a boolean array of size 26 to track encountered letters.
- Iterate through each character in the sentence.
- Mark the corresponding position in the array as true.
- Check whether all 26 letters have appeared.
- Return true if every letter is present, otherwise return false.

Time Complexity:
O(n), where n is the length of the sentence.

Space Complexity:
O(1), since the tracking array always contains 26 elements.

Date:
2026-11-20
==================================================
*/

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        bool seen[26] = {false};

        for (char c : sentence)
        {
            seen[c - 'a'] = true;
        }

        for (bool found : seen)
        {
            if (!found)
            {
                return false;
            }
        }

        return true;
    }
};
