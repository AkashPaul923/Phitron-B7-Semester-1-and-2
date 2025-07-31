#include <bits/stdc++.h>
using namespace std;
vector<int> v;

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

void levelNodes(Node* root, int l)
{
    queue<pair<Node*, int>> q;
    if(root) q.push({root, 0});
    while(!q.empty())
    {
        pair<Node*, int> parent = q.front();
        q.pop();

        Node* node = parent.first;
        int level = parent.second;
        if(level == l)
            v.push_back(node->val);

        if(node->left) q.push({node->left, level + 1});
        if(node->right) q.push({node->right, level + 1});
    }
}

int main()
{
    Node* root = inputBinaryTree();
    int l;
    cin >> l;
    levelNodes(root, l);
    if(v.empty())
        cout << "Invalid";
    else
    {
        for(int x : v)
            cout << x << " ";
    }

    return 0;
}