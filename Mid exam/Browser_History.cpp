#include <bits/stdc++.h>
using namespace std;
// linked list node
class Node
{
public:
    string s;
    Node *next;
    Node *prev;

    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string s)
{
    Node *newnode = new Node(s);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->s << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insert_at_tail(head, tail, s);
    }

    int q;
    cin >> q;

    Node *tmp = head;
    while (q--)
    {
        string cmnd;
        cin >> cmnd;
        if (cmnd == "visit") //if visit
        {
            string name;
            cin >> name;
            Node *tmp2 = head;
            while (tmp2 != NULL)
            {
                if (tmp2->s == name)
                {
                    cout << tmp2->s << endl;
                    tmp = tmp2;
                    break;
                }
                tmp2 = tmp2->next;
            }
            if (tmp2 == NULL)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmnd == "prev") //if prev
        {
            if (tmp->prev != NULL)
            {
                cout << tmp->prev->s << endl;
                tmp = tmp->prev;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (cmnd == "next") //if next
        {
            if (tmp->next != NULL)
            {
                cout << tmp->next->s << endl;
                tmp = tmp->next;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}