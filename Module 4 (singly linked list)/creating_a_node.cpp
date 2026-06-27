#include<bits/stdc++.h>
using namespace std;
//for creating linked list node
class Node
{
    public :
    int val;
    Node* next;
};

int main()
    {
        //declare node object
        Node a, b, c;

        //initilized value
        a.val = 10;
        b.val = 20;
        c.val = 30;

        //connecting their node address
        a.next = &b;
        b.next = &c;
        c.next = NULL;

        cout <<a.val<<endl;
        cout << a.next->val<<endl;
        cout << a.next->next->val;


        return 0;
    }