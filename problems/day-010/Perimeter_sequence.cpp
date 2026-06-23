/*
==================================================
Problem: Perimeter Sequence

Platform: Codewars

Difficulty: 8 kyu

Topics:
- Mathematics
- Patterns

Approach:
Observe that each stage increases the
perimeter by exactly 4 * a.

Therefore the perimeter of the nth
shape is:

perimeter = 4 * a * n

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-06-23
==================================================
*/

int perimeter_sequence(int a, int n)
{
    return 4 * a * n;
}