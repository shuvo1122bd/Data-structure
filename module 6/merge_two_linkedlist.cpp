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

Node *mergedTwo(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    Node *newHead = NULL;
    Node *newTail = NULL;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val <= tmp2->val)
        {
            insert_at_tail_optimized(newHead, newTail, tmp1->val);
            tmp1 = tmp1->next;
        }
        else
        {
            insert_at_tail_optimized(newHead, newTail, tmp2->val);
            tmp2 = tmp2->next;
        }
    }
    while (tmp1 != NULL)
    {
        insert_at_tail_optimized(newHead, newTail, tmp1->val);
        tmp1 = tmp1->next;
    }

    while (tmp2 != NULL)
    {
        insert_at_tail_optimized(newHead, newTail, tmp2->val);
        tmp2 = tmp2->next;
    }

    return newHead;
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
    while (cin >> val && val != -1)
    {
        insert_at_tail_optimized(head, tail, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (cin >> val2 && val2 != -1)
    {
        insert_at_tail_optimized(head2, tail2, val2);
    }
    Node *merged = mergedTwo(head, head2);
    printing_linkedlist(merged);
    return 0;
}