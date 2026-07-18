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

void printing_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

void insert_at_any_pos(Node* &head, int idx, int val)
{
    Node* tmp = head;
    for(int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;

}

int main()
    {
        Node* head = new Node(10);
        Node* a = new Node(20);
        Node* tail = new Node(30);

        head->next = a;
        a->prev = head;
        a->next = tail; 
        tail->prev = a;

        insert_at_any_pos(head, 1, 100);
        insert_at_any_pos(head, 2, 200);
        printing_linkedlist(head);

        return 0;
    }