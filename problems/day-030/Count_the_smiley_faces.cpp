/*
==================================================
Problem: Count the Smiley Faces!

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Arrays
- Validation
- Fundamentals

Approach:
Iterate through the array of strings.
For each string:
- If its length is 2, validate the eyes and mouth.
- If its length is 3, validate the eyes, nose, and mouth.
Count every valid smiley face and return the total.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-07-13
==================================================
*/

#include <vector>
#include <string>

using namespace std;

int countSmileys(vector<string> arr)
{
    int countSmileys = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        const string& face = arr[i];

        if (face.size() == 2)
        {
            if ((face[0] == ';' || face[0] == ':') &&
                (face[1] == ')' || face[1] == 'D'))
            {
                countSmileys++;
            }
        }
        else if (face.size() == 3)
        {
            if ((face[0] == ';' || face[0] == ':') &&
                (face[1] == '-' || face[1] == '~') &&
                (face[2] == ')' || face[2] == 'D'))
            {
                countSmileys++;
            }
        }
    }

    return countSmileys;
}