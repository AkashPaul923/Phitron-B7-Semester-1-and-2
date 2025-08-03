#include <bits/stdc++.h>
using namespace std;

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

Node* inputBinaryTree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l, r;
        Node *myLeft, *myRight;
        cin >> l >> r;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

void levelorder_print(Node* root)
{
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        cout << parent->val << " ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
}

void insert_in_BST(Node* &root, int val)
{
    if(root == NULL)
        root = new Node(val);
    if(root->val > val)
    { 
        if(root->left == NULL)
            root->left = new Node(val);
        else
            insert_in_BST(root->left, val);
    }
    else
    { 
        if(root->right == NULL)
            root->right = new Node(val);
        else
            insert_in_BST(root->right, val);
    }
}

int main()
{
    Node* root = inputBinaryTree();
    int val;
    cin >> val;
    insert_in_BST(root, val);
    levelorder_print(root);

    return 0;
}