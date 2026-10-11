/*
==================================================
Problem: Linked List Cycle

Platform: LeetCode
Problem Number: 141

Difficulty: Easy

Topics:
- Linked List
- Two Pointers
- Floyd's Cycle Detection

Approach:
- Initialize slow and fast pointers at head.
- Move slow one step and fast two steps.
- If both pointers meet, a cycle exists.
- If fast reaches the end, no cycle exists.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-11
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
    bool hasCycle(ListNode *head)
    {

        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != nullptr &&
               fast->next != nullptr &&
               fast->next->next != nullptr)
        {
            fast = fast->next->next;

            if (fast == slow)
            {
                return true;
            }

            slow = slow->next;
        }

        return false;
    }
};