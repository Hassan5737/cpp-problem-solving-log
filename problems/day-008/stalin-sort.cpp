/*
==================================================
Problem: Stalin Sort

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Arrays
- Vectors
- Loops
- Conditions

Approach:
Keep the first element as the initial survivor.

Traverse the array from left to right.
Each element survives only if it is greater
than or equal to the last surviving element.

Store all survivors in a new vector and
replace the original array at the end.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-06-21
==================================================
*/

#include <vector>
#include <iostream>
using namespace std;

void stalinSort(vector<int>& arr) {
    if (arr.empty())
        return;

    vector<int> result;
    result.push_back(arr[0]);
    int survivor = arr[0];

    for (size_t i = 1; i < arr.size(); i++) {
        int current = arr[i];
        if (current >= survivor) {
            result.push_back(current);
            survivor = current;
        } else {
            cout << "Расстрелять!" << endl;
        }
    }

    arr = result;
}