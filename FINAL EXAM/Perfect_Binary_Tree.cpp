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

bool perfect_binary(Node* root)
{
    if(root == NULL)
        return true;
    if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
        return false;
    bool l = perfect_binary(root->left);
    bool r = perfect_binary(root->right);

    return l && r;
}

int main()
{
    Node *root = input_tree();
    bool perfect = perfect_binary(root);
    if(perfect)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}