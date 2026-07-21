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

class myQueue
{
    public :
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if( head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(sz == 0)
            return true;
        else
            return false;
    }
};

int main()
    {
        myQueue qu;
        qu.push(10);
        qu.push(20);
        qu.push(30);
        
        qu.pop();
        qu.pop();

        while(!qu.empty())
        {
            cout <<qu.front()<<" ";
            qu.pop();
        }

        return 0;
    }