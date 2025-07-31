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

void printLeftNodes(Node* root)
{
    if(root == NULL)
        return;
    if(root->left)
        printLeftNodes(root->left);
    else
        printLeftNodes(root->right);
    cout << root->val << " ";
}

void printRightNodes(Node* root)
{
    if(root == NULL)
        return;
    cout << root->val << " ";
    if(root->right)
        printRightNodes(root->right);
    else
        printRightNodes(root->left);
}

int main()
{
    Node* root = inputBinaryTree();
    if(root->left) printLeftNodes(root->left);
    if(root) cout << root->val << " ";
    if(root->right) printRightNodes(root->right);

    return 0;
}