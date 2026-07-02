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
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;

}

void printing_recursion(Node* head)
{
    Node* temp = head;
    if(temp == NULL)
    {
        return;
    }
    cout <<  temp->val<<endl;  
    printing_recursion(temp->next);
}

int main()
    {
        Node* head = NULL;
        Node* tail = NULL;

        int x;

        while(1)
        {
            cin >> x;
            if(x == -1)
            {
                break;
            }
            
            insert_at_tail(head, tail, x);
        }
        printing_recursion(head);

        return 0;
    }