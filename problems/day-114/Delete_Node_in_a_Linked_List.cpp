/*
==================================================
Problem: Delete Node in a Linked List

Platform: LeetCode
Problem Number: 237

Difficulty: Medium

Topics:
- Linked List
- Pointers
- Node Manipulation
- Traversal

Approach:
- The head of the linked list is not provided.
- Start from the given node.
- Copy the value of the next node into the
  current node.
- Skip the next node by updating the current
  node's next pointer.
- Repeat until reaching the last node.
- This effectively shifts the following values
  backward and removes the final duplicate node
  from the linked list.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-05
==================================================
*/
class Solution
{
private:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr) {}
    };

public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};