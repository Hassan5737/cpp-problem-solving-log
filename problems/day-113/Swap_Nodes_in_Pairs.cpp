/*
==================================================
Problem: Swap Nodes in Pairs

Platform: LeetCode
Problem Number: 24

Difficulty: Medium

Topics:
- Linked List
- Pointers
- Linked List Manipulation
- Dummy Node

Approach:
- Create a dummy node before the head to simplify
  handling the first pair.
- Use a pointer prev to track the node before
  the current pair.
- Identify the first and second nodes of the pair.
- Rearrange their next pointers to swap them.
- Move prev to the end of the swapped pair.
- Continue until fewer than two nodes remain.
- Return dummy.next as the new head of the list.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-04
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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode *prev = &dummy;

        while (prev->next != nullptr && prev->next->next != nullptr)
        {
            ListNode *first = prev->next;
            ListNode *second = first->next;

            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
        }

        return dummy.next;
    }
};