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

void newlist (int val)
{
    Node* head2;
    Node* tail2;
    Node* newnode = new Node(val);
    if(head2 == NULL)
    {
        head2 = newnode;
        tail2 = newnode;
    }
    tail2->next = newnode;
    tail2 = newnode;
    print(head2);
}

void input(Node* head) 
{
        Node* tmp = head;
        for(Node* i = head; i != NULL; i = i->next)
        {
            for(Node* j = i->next; j != NULL; j = j->next)
            {
                if(i->val != j->val)
                {
                newlist( i->val);
                }
            }
        }
}


void print(Node* head2)
{
    Node* tmp = head2;
    while(tmp != NULL)
    {
        cout << tmp->val;
        tmp = tmp->next;
    }
}


int main()
    {
        Node* head = NULL;
        Node* tail = NULL;
        int n;
        cin >> n;

        int val;

        while(cin >> val)
        {
          input(head);
        }
     
        return 0;
    }