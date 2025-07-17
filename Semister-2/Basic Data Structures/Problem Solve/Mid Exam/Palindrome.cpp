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
    newNode->prev = tail;
    tail = newNode;
}

bool palindrome(Node *temp1, Node *temp2)
{
    while (temp2 != temp1->prev && temp2 != temp1)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    bool isPalindrome = palindrome(head, tail);

    isPalindrome ? cout << "YES" : cout << "NO";

    return 0;
}