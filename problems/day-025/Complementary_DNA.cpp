/*
==================================================
Problem: Complementary DNA

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Strings
- Character Mapping
- Switch Statement

Approach:
Traverse the DNA string one character at a time.

Replace each nucleotide with its complementary
base according to the following rules:

A -> T
T -> A
C -> G
G -> C

Build and return the resulting string.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-07-08
==================================================
*/

#include <string>

using namespace std;

string DNAStrand(const string& dna)
{
    string result;

    for (char c : dna)
    {
        switch (c)
        {
            case 'A':
                result += 'T';
                break;

            case 'T':
                result += 'A';
                break;

            case 'C':
                result += 'G';
                break;

            case 'G':
                result += 'C';
                break;
        }
    }

    return result;
}