/*
==================================================
Problem: Merge Sorted Array

Platform: LeetCode
Problem Number: 88

Difficulty: Easy

Topics:
- Array
- Two Pointers

Approach:
- Start from the end of both sorted arrays.
- Compare the largest remaining elements.
- Place the larger element at the end of nums1.
- Move the corresponding pointer backward.
- Continue until one array is exhausted.
- Copy any remaining elements from nums2.

Time Complexity:
O(m + n)

Space Complexity:
O(1)

Date:
2026-09-21
==================================================
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        while(j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
