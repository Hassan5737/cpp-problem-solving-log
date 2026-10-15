
/*
==================================================
Problem: Remove Nth Node From End of List

Platform: LeetCode
Problem Number: 19

Difficulty: Medium

Topics:
- Linked List
- Two Pointers
- Dummy Node

Approach:
- Use a dummy node before the head to handle removing the first node.
- Move the fast pointer n steps ahead.
- Move both pointers until fast reaches the last node.
- Remove the target node by updating the slow pointer's next link.
- Return dummy.next as the new head.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-15
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode *fast = &dummy;
        ListNode *slow = &dummy;

        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete;

        return dummy.next;
    }
};
