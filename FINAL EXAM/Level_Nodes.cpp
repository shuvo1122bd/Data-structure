#include <bits/stdc++.h>
using namespace std;
// Binary tree node
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *input_tree()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        Node *myLeft;
        Node *myRight;

        int l, r;
        cin >> l >> r;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

vector<int> v;
void level_nodes(Node* root, int x)
{
    queue<pair<Node*, int>> q;
    if(root)
        q.push({root, 0});
    while(!q.empty())
    {
        pair<Node*, int> p = q.front();
        q.pop();
        Node* f = p.first;
        int level = p.second;

        if(x == level)
        {
            v.push_back(f->val);
        }

        if(f->left)
            q.push({f->left, level+1});
        if(f->right)
            q.push({f->right, level+1});
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    level_nodes(root, x);

    if(v.empty())
        cout<<"Invalid";
    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout <<v[i]<<" ";
        }
    }
    return 0;
}