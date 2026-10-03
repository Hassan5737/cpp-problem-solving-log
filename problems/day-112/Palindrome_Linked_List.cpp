/*
==================================================
Problem: Palindrome Linked List

Platform: LeetCode
Problem Number: 234

Difficulty: Easy

Topics:
- Linked List
- Array
- Two Pointers
- Palindrome

Approach:
- Traverse the linked list and store its values
  in a vector.
- Use two indices starting from the beginning
  and end of the vector.
- Compare the corresponding values.
- If any pair is different, the linked list is
  not a palindrome.
- Move both indices toward the center.
- Return true if all corresponding values match.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-10-03
==================================================
*/

#include <vector>
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
    bool isPalindrome(ListNode* head)
    {
        ListNode* cur = head;
        vector<int> v;

        while(cur != nullptr)
        {
            v.push_back(cur->val);
            cur = cur->next;
        }

        int left = 0;
        int right = v.size() - 1;

        while(left < right)
        {
            if(v[left] != v[right])
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};