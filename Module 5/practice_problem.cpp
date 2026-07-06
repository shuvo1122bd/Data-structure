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

int main()
    {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        int size = 0;
        while(cin >> val)
        {
            insert_at_tail_optimized(head, tail, val);
            size++;
        }

        cout << size;
        return 0;
    }