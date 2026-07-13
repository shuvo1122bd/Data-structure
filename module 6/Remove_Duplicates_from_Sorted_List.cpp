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

void removeDuplicate(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->next != NULL && tmp->val == tmp->next->val)
        {
            Node* next_next = tmp->next->next;
            Node* delete_node = tmp->next;
            delete(delete_node);
            tmp->next = next_next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}

void printing_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main()
    {
        int t;
        cin >> t;
        
        while(t--)
        {
            Node* head = NULL;
            Node* tail = NULL;
            int n;
            cin >> n;
    
            int i = 0;
            while(i < n)
            {
                int val;
                cin >> val;
                insert_at_tail_optimized(head, tail, val);
                i++;
            }
            removeDuplicate(head);
            printing_linkedlist(head);
            cout <<endl;
        }
        return 0;
    }