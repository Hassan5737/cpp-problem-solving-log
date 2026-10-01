/*
==================================================
Problem: Remove Duplicates from Sorted List

Platform: LeetCode
Problem Number: 83

Difficulty: Easy

Topics:
- Linked List
- Pointers
- Traversal

Approach:
- Traverse the sorted linked list using a pointer.
- Compare each node with its next node.
- If both nodes have the same value, skip the
  duplicate by updating the next pointer.
- Otherwise, move the current pointer forward.
- Return the original head of the modified list.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-01
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *cur = head;

        while (cur != nullptr && cur->next != nullptr)
        {
            if (cur->val == cur->next->val)
            {
                cur->next = cur->next->next;
            }
            else
            {
                cur = cur->next;
            }
        }

        return head;
    }
};