
/*
==================================================
Problem: Find Words Containing Character

Platform: LeetCode
Problem Number: 2942

Difficulty: Easy

Topics:
- Array
- String

Approach:
- Initialize an empty vector to store the result indices.
- Iterate through the words array using their indices.
- Check whether the current word contains the given character using find().
- If the character exists, add the current index to the result.
- Return the result vector.

Time Complexity:
O(n * m), where n is the number of words and m is the maximum word length.

Space Complexity:
O(n), for the resulting indices vector.

Date:
2026-11-23
==================================================
*/

class Solution
{
public:
    vector<int> findWordsContaining(vector<string>& words, char x)
    {
        vector<int> answer;

        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(x) != string::npos)
            {
                answer.push_back(i);
            }
        }

        return answer;
    }
};
