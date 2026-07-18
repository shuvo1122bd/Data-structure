#include<bits/stdc++.h>
using namespace std;
//linked list node
class Node
{
    public :
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    cout <<endl;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void reverse_doubly(Node* head, Node* tail)
{
    Node* i = head;
    Node* j = tail;

    while(i->prev != j && i != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

int main()
    {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while(true)
        {
            cin >> val;
            if(val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        reverse_doubly(head, tail);
        print_forward(head);
        return 0;
    }