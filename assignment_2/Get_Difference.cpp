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
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int max_value(Node *head)
{
    long long int max = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}
int min_value(Node *head)
{
    long long int min = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }

    return min;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int v;

    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        input_value(head, tail, v);
    }

    // calling function to find max value
    long long int max = max_value(head);

    // calling function to find min value
    long long int min = min_value(head);

    cout << max - min;
    return 0;
}