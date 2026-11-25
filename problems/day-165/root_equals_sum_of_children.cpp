/*
==================================================
Problem: Root Equals Sum of Children

Platform: LeetCode
Problem Number: 2236

Difficulty: Easy

Topics:
- Tree
- Binary Tree

Approach:
- Compare the root node's value with the sum of its left and right children.
- Return true if both values are equal, otherwise return false.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-11-25
==================================================
*/

class Solution {
public:
    bool checkTree(TreeNode* root) {
        return root->val == root->left->val + root->right->val;
    }
};