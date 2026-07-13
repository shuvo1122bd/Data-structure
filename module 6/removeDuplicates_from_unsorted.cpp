#include <bits/stdc++.h>
using namespace std;
// linked list node
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail_optimized(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next; // or newnode
}

void removeDuplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *pre = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                Node *next_next = pre->next->next;
                j = j->next;
                Node *deleteNode = pre->next;
                delete (deleteNode);
                pre->next = next_next;
            }
            else
            {
                pre = pre->next;
                j = j->next;
            }
        }
    }
}

void printing_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (cin >> val)
    {
        insert_at_tail_optimized(head, tail, val);
    }

    removeDuplicates(head);
    printing_linkedlist(head);
    return 0;
}