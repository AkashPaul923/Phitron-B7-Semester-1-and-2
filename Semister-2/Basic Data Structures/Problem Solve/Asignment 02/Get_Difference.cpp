#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void MaxMin(Node* &head, int &max, int &min)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if(temp->val > max)
        {
            max = temp->val;
        }
        if(temp->val < min)
        {
            min = temp->val;
        }
        temp = temp->next;
    }
}

void print_linked_list(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int max = INT_MIN, min = INT_MAX;
    
    while (true)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    MaxMin(head, max, min);

    cout << max - min ;

    return 0;
}