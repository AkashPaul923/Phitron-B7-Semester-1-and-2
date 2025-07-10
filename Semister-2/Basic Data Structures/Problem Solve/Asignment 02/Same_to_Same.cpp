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

bool is_equal(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1->next != NULL && temp2->next == NULL)
        {
            return false;
        }
        else if (temp1->next == NULL && temp2->next != NULL)
        {
            return false;
        }
        else if(temp1->val != temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    bool isEqual = is_equal(head1, head2);

    (isEqual == true) ? cout << "YES" : cout << "NO";

    return 0;
}