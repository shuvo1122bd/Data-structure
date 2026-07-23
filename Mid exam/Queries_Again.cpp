#include <bits/stdc++.h>
using namespace std;
// linked list node
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_pos(Node *head, int val, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *newnode = new Node(val);
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

void print_forward_backard(Node *head, Node *tail)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    Node *tmp2 = tail;
    cout << "R -> ";
    while (tmp2 != NULL)
    {
        cout << tmp2->val << " ";
        tmp2 = tmp2->prev;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx == 0)
        {
            sz++;
            insert_at_head(head, tail, val);
            print_forward_backard(head, tail);
        }
        else if (idx == sz)
        {
            sz++;
            insert_at_tail(head, tail, val);
            print_forward_backard(head, tail);
        }
        else if (idx < sz)
        {
            sz++;
            insert_at_any_pos(head, val, idx);
            print_forward_backard(head, tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}