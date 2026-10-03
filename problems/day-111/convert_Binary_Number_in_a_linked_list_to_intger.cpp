/*
==================================================
Problem: Convert Binary Number in a Linked List to Integer

Platform: LeetCode
Problem Number: 1290

Difficulty: Easy

Topics:
- Linked List
- Traversal
- Binary
- Math

Approach:
- Traverse the linked list from left to right.
- Maintain a result variable starting at zero.
- For each node, multiply the current result
  by 2 and add the node's binary value.
- This simulates shifting the binary number left
  and adding the next bit.
- Return the final decimal value.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-02
==================================================
*/

class Solution
{
private:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
public:
    int getDecimalValue(ListNode* head)
    {
        int result = 0;

        ListNode* cur = head;

        while(cur != nullptr)
        {
            result = result * 2 + cur->val;

            cur = cur->next;
        }

        return result;
    }
};