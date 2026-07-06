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

int check_duplicate (Node* head) //Time Complexity = O(n*n)
{

    int flag = 0;
    for(Node* i = head; i != NULL; i = i->next)
    {
        for(Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val == j->val)
            {
                flag = 1;
                break;
            }
        }
    }

    return flag;
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
        int flag = check_duplicate(head);


        if(flag == 0)
        {
            cout <<"No duplicate value";
        }
        else
        {
            cout <<"Duplicate value present";
        }
        return 0;
    }