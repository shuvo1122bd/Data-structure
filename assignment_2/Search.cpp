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

void input_value(Node *&head, Node *&tail, int v) // Input values
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

int search_element(Node *head, Node *tail, int x) // searching x element in linked_list
{
    int idx = -1;
    Node *tmp = head;
    for (int i = 0; tmp != NULL; i++)
    {
        if (tmp->val == x)
        {
            idx = i;
            break;
        }
        tmp = tmp->next;
    }

    return idx;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        long long int v;

        int size = -1;
        while (1)
        {
            cin >> v;
            if (v == -1)
            {
                break;
            }
            size++;
            input_value(head, tail, v);
        }
        long long int x;
        cin >> x;

        // // calling search function
        int idx = search_element(head, tail, x);
        cout << idx << endl;
    }
    return 0;
}