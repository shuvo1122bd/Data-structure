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

// void count_list(Node* head)
// {
//     int count = 0;
//     Node* tmp = head;
//     while(tmp != NULL)
//     {
//         count++;
//         tmp = tmp->next;
//     }
//     cout << count;
// }

void insert_at_head(Node* &head, int val)
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        newnode = head;
        newnode = tail;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_at_any_position(Node* head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
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

int main()
    {
        Node* head = new Node(10);
        Node* a = new Node(20);
        Node* b = new Node(30);
        Node* tail = new Node(40);

        head->next = a;
        a->next = b;
        b->next = tail;

        // count_list(head);
        insert_at_head(head, 5);
        insert_at_tail(head, tail, 50);
        insert_at_any_position(head, 4, 35);
        printing_linkedlist(head);

        return 0;
    }