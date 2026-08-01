/*
==================================================
Problem: Convert a Linked List to a String

Platform: Codewars

Difficulty: 7 kyu

Topics:
- Linked List
- Strings
- Traversal

Approach:
1. If the linked list is empty, return "nullptr".
2. Create a string to store the result.
3. Traverse the linked list using a current pointer.
4. Append each node's value followed by " -> ".
5. After the traversal, append "nullptr".
6. Return the final string.

Time Complexity:
O(n)

Space Complexity:
O(n)

Date:
2026-08-01
==================================================
*/

#include <string>

using namespace std;


struct Node
{
    int data;
    Node* next;

    Node(int data, Node* next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

string stringify(const Node *list)
{
    if (list == nullptr)
    {
        return "nullptr";
    }

    string result;
    const Node* current = list;

    while (current != nullptr)
    {
        result += to_string(current->data);
        result += " -> ";
        current = current->next;
    }

    result += "nullptr";

    return result;
}
