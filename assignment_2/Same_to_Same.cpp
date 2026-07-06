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
//taking input first linked list
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

//taking input second linked list
void input_value2(Node *&head2, Node *&tail2, int v2) // Input values
{
    Node *newnode = new Node(v2);
    if (head2 == NULL)
    {
        head2 = newnode;
        tail2 = newnode;
        return;
    }
    tail2->next = newnode;
    tail2 = newnode;
}

// checking if they are same
int check(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;

    int flag = 0;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return flag;
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int v;
    int count = 0;

    // 1st input
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        input_value(head, tail, v);
        count++;
    }

    int count2 = 0;
    // 2nd input
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        input_value2(head2, tail2, v);
        count2++;
    }

    if (count == count2)
    {
        int flag = check(head, head2);

        if (flag == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}