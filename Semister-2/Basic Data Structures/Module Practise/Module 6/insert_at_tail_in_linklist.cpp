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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linklist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    insert_at_tail(head, 100);
    print_linklist(head);

    return 0;
}