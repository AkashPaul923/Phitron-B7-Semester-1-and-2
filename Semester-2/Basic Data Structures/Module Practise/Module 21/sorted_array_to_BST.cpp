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

Node* ArrayToBST(int a[], int n, int l, int r)
{
    if(l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node* root = new Node(a[mid]);
    Node* left = ArrayToBST(a, n, l, mid-1);
    Node* right = ArrayToBST(a, n, mid+1, r);
    root->left = left;
    root->right = right;
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

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    Node* root = ArrayToBST(a, n, 0, n-1);
    levelorder_print(root);

    return 0;
}