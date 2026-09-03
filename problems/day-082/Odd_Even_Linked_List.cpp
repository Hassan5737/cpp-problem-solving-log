/*
==================================================
Problem: Odd Even Linked List

Platform: LeetCode
Problem Number: 328

Difficulty: Medium

Topics:
- Linked List
- Pointers

Approach:
- Separate the linked list into odd-positioned
  and even-positioned nodes.
- Connect all odd-positioned nodes together.
- Connect all even-positioned nodes together.
- Append the even list after the odd list.

Time Complexity:
O(n)

Space Complexity:
O(1)

Date:
2026-09-03
==================================================
*/

#include <iostream>
using namespace std;


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
    ListNode* oddEvenList(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while(even != nullptr && even->next != nullptr)
        {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;

        return head;
    }
};
