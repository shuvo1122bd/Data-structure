#include<bits/stdc++.h>
using namespace std;
//linked list node
class Node
{
    public :
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail_optimized(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next; // or newnode
    
}

void printing_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}

void reverse_recursion(Node* &head, Node* tmp, Node* &tail)
{
    if( tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_recursion(head, tmp->next, tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

int main()
    {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while(cin >> val)
        {
            insert_at_tail_optimized(head, tail, val);
        }

        reverse_recursion(head, head, tail);
        // printing_linkedlist(head);

        cout << tail->val;
        return 0;
    }