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

Node* input_BinaryTree()
{
    // input root value and create root Node
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    // create Queue and stored root Node in Queue
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        // 1. get working Node from queue
        Node* p = q.front();
        q.pop();

        // 2. input 2 value, create 2 childs node and connect with parent Node
        int l, r;
        Node *myLeft, *myRight;
        cin >> l >> r;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. Not Null Node stored in Queue
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node* root)
{
    if(root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";
        
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    Node* root = input_BinaryTree();

    level_order(root);

    return 0;
}