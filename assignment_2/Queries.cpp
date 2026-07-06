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

// insert at head
void insert_at_head(Node *&head, Node *&tail,long long int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
// insert at tail
void insert_at_tail_optimized(Node *&head, Node *&tail, long long int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode; // or newnode
}

// delete_head
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete (deleteNode);
}
// delete at tail
void delete_at_tail(Node *&head, Node *&tail,int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete (delete_node);
    tail = tmp;
}
// delete at any position
void delete_at_any_pos(Node *&head, int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void printing_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    long long int size = 0;
    while (q--)
    {
        long long int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            size++;
        }
        else if (x == 1)
        {
            insert_at_tail_optimized(head, tail, v);
            size++;
        }
        else if(size != 0)//checking linked
        {
            if (v == 0)
            {
                delete_head(head);
                size--;
            }
            else if (size-1 == v)
            {
                delete_at_tail(head, tail, v);
                size--;
            }
            else if (v < size)
            {
                delete_at_any_pos(head, v);
                size--;
            }
        }
        printing_linkedlist(head);
        cout << endl;
    }
    return 0;
}