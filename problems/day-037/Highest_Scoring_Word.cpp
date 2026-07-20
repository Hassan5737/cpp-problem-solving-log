/*
==================================================
Problem: Highest Scoring Word

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Loops
- Character Manipulation

Approach:
1. Traverse the string character by character.
2. Build each word until reaching a space.
3. Calculate the score of the current word using:
   score = character - 'a' + 1.
4. Keep track of the highest scoring word.
5. If scores are equal, keep the first word.
6. Return the highest scoring word.

Time Complexity:
O(n)

Space Complexity:
O(k)
(k = length of the longest word)

Notes:
The loop runs until i <= str.size() to ensure the last
word is processed without needing an extra space.

Date:
2026-07-20
==================================================
*/

#include <string>

using namespace std;

string highestScoringWord(const string &str)
{
    string bestWord;
    string currentWord;

    int bestScore = 0;
    int currentScore = 0;

    for (int i = 0; i <= str.size(); i++)
    {
        if (i == str.size() || str[i] == ' ')
        {
            if (currentScore > bestScore)
            {
                bestScore = currentScore;
                bestWord = currentWord;
            }

            currentWord.clear();
            currentScore = 0;
        }
        else
        {
            currentWord += str[i];
            currentScore += (str[i] - 'a' + 1);
        }
    }

    return bestWord;
}