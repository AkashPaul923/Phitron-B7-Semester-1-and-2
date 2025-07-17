#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_any_pos(Node *&head, Node *&tail, int val, int idx)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    if (temp == tail)
    {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_forward(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backword(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int idx, val;
        cin >> idx >> val;
        if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_forward(head);
            print_backword(tail);
        }
        else
        {
            int sz = size(head);
            if(idx > sz)
            {
                cout << "Invalid" << endl;
            }
            else
            {
                insert_at_any_pos(head, tail, val, idx);
                print_forward(head);
                print_backword(tail);
            }
        }
    }

    return 0;
}