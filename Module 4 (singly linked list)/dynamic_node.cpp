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

int main()
    {
        Node* head = new Node(10);
        Node* a = new Node(20);
        Node* b = new Node(30);

        head->next = a;
        a->next = b;

        cout << head->val<<endl; //head value
        cout << head->next->val<<endl; //head -> a.value
        cout << head->next->next->val; //head -> a -> b.value
        return 0;
    }