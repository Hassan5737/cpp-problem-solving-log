/*
==================================================
Problem: Word a10n (abbreviation)

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Parsing
- Character Processing
- String Manipulation

Approach:
Traverse the input string and build words
character by character. Whenever a non-
alphabetical character is encountered,
process the accumulated word.

Words with a length of 4 or greater are
abbreviated using the first letter, the
number of removed characters, and the
last letter. All separators remain in
their original positions.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-17
==================================================
*/

#include <string>
#include <cctype>

using namespace std;

string abbreviate_word(string word) {
    if (word.length() < 4) {
        return word;
    }
    return word.front() + to_string(word.length() - 2) + word.back();
}

string abbreviate(string sentence) {
    string result = "";
    string current_word = "";

    for (char c : sentence) {
        if (isalpha(c)) {
            current_word += c;
        } else {
            if (!current_word.empty()) {
                result += abbreviate_word(current_word);
                current_word = "";
            }
            result += c;
        }
    }

    if (!current_word.empty()) {
        result += abbreviate_word(current_word);
    }

    return result;
}