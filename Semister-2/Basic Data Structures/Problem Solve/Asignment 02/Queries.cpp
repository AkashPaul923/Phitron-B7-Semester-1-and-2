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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
    newNode->next = head;
    head = newNode;
}

void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;
}

void delete_at_any(Node *&head, Node *&tail, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        if (temp == NULL)
        {
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    if (temp->next == NULL)
    {
        return;
    }

    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
    if (temp->next == NULL)
    {
        tail = temp;
    }
}

void print_linked_list(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            if (v == 0)
            {
                delete_at_head(head);
            }
            else
            {
                delete_at_any(head, tail, v);
            }
        }
        print_linked_list(head);
    }

    return 0;
}