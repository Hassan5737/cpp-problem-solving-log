/*
==================================================
Problem: Intersection of Two Linked Lists

Platform: LeetCode
Problem Number: 160

Difficulty: Easy

Topics:
- Linked List
- Two Pointers

Approach:
- Initialize one pointer at each list's head.
- Move both pointers one step at a time.
- When a pointer reaches the end, redirect it to the
  head of the other list.
- If the pointers meet, return the intersection node.
- If both become nullptr, there is no intersection.

Time Complexity:
O(n + m)

Space Complexity:
O(1)

Date:
2026-10-12
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *a = headA;
        ListNode *b = headB;

        while (a != b)
        {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }

        return a;
    }
};
