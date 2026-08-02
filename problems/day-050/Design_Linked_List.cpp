/*
==================================================
Problem: Design Linked List

Platform: LeetCode

Difficulty: Medium

Topics:
- Linked List
- Doubly Linked List
- Design
- Data Structures

Approach:
1. Implement a custom Doubly Linked List.
2. Define a private Node structure with:
   - val
   - next
   - prev
3. Maintain head, tail, and size members.
4. Implement:
   - get(index)
   - addAtHead(val)
   - addAtTail(val)
   - addAtIndex(index, val)
   - deleteAtIndex(index)
5. Handle edge cases:
   - Empty list
   - Single node
   - Insert/Delete at head
   - Insert/Delete at tail
   - Invalid indices

Time Complexity:
- get()            : O(n)
- addAtHead()      : O(1)
- addAtTail()      : O(1)
- addAtIndex()     : O(n)
- deleteAtIndex()  : O(n)

Space Complexity:
O(1)

Date:
2026-08-02
==================================================
*/

class MyLinkedList 
{

    private:

    struct Node
    {
        int val;
        Node* next;
        Node* prev;

        Node(int value)
            : val(value), next(nullptr), prev(nullptr)
        {}
    };

    Node* head;
    Node* tail;
    int size;


public:

    MyLinkedList()
        : head(nullptr), tail(nullptr), size(0)
    {

    }
    
    int get(int index)
    {
        if (index < 0 || index >= size)
        {
            return -1;
        }

        Node* current = head;

        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }

        return current->val;
    }
    
    void addAtHead(int val)
    {
        Node* newNode = new Node(val);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        size++;
    }
    void addAtTail(int val)
    {
        Node* newNode = new Node(val);

        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        size++;
    }
    
    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > size)
            return;

        if (index == 0)
        {
            addAtHead(val);
            return;
        }

        if (index == size)
        {
            addAtTail(val);
            return;
        }

        Node* current = head;

        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }

        Node* newNode = new Node(val);

        newNode->next = current;
        newNode->prev = current->prev;

        current->prev->next = newNode;
        current->prev = newNode;

        size++;
    }
    
    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;

        if (size == 1)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
            size--;
            return;
        }

        if (index == 0)
        {
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
            size--;
            return;
        }

        if (index == size - 1)
        {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
            size--;
            return;
        }

        Node* current = head;

        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;

        delete current;

        size--;
    }
};