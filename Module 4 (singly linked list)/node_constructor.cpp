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
        Node a(10), b(20), c(30);

        //connecting their node address
        a.next = &b;
        b.next = &c;

        cout <<a.val<<endl;
        cout << a.next->val<<endl;
        cout << a.next->next->val;


        return 0;
    }