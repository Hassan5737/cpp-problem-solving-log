/*
==================================================
Problem: Remove Duplicates from Sorted List II

Platform: LeetCode
Problem Number: 82

Difficulty: Medium

Topics:
- Linked List
- Pointers
- Dummy Node
- Linked List Manipulation

Approach:
- Create a dummy node before the head to handle
  duplicate groups at the beginning of the list.
- Use prev to track the last node to keep and cur
  to traverse the linked list.
- If cur and its next node have equal values,
  move cur through the entire duplicate group.
- Skip the whole group by connecting prev->next
  to cur->next.
- If the current value is unique, move prev
  forward to the current node.
- Return dummy.next as the new head.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-10-09
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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* cur = head;


        while(cur != nullptr)
        {
            if(cur->next != nullptr &&
                cur->val == cur->next->val)
                {
                    while(cur->next != nullptr && 
                    cur->val == cur->next->val)
                    {
                        cur = cur->next;
                    }
                    prev->next = cur->next;
                }
                else
                {
                    prev = cur;
                }
                cur = cur->next;
        }
        return dummy.next;

    }
};