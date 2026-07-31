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

void left_outer(Node* root)
{
    if(root == NULL)
        return;
    if(root->left)
        left_outer(root->left);
    else
        left_outer(root->right);
    cout<<root->val<<" ";
}

void right_outer(Node* root)
{
    if(root == NULL)
        return;
    cout<<root->val<<" ";
    if(root->right)
        right_outer(root->right);
    else
        right_outer(root->left);
}
int main()
{
    Node *root = input_tree();

    if(root->left)
        left_outer(root);
    else
        cout<<root->val<<" ";

    if(root->right)
        right_outer(root->right);
    
    return 0;
}