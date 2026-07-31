#include<bits/stdc++.h>
using namespace std;
//Binary tree node
class Node
{
    public :
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    Node* root;
    int val;
    cin >> val;
    if(val == -1)
        root = NULL;
    else
    root = new Node(val);
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        Node* myLeft;
        Node* myRight;

        int l, r;
        cin >> l >> r;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }

    return root;
}

int count_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}



int main()
    {
        Node* root = input_tree();
        cout << count_nodes(root);
        return 0;
    }