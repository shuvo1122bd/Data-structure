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
void input_value(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
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

    int v;
    int fre[1001] = {0};
    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        if(fre[v] == 0)
        {
            input_value(head, tail, v);
            fre[v]++;
        }
    }

    printing_linkedlist(head);
    return 0;
}