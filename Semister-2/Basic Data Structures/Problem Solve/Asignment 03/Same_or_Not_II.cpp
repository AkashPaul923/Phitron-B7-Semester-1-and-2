#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool isEqual = true;
    while (true)
    {
        if (st.empty() && q.empty())
        {
            break;
        }
        if (st.empty() && !q.empty())
        {
            isEqual = false;
            break;
        }
        if (!st.empty() && q.empty())
        {
            isEqual = false;
            break;
        }
        if (st.top() != q.front())
        {
            isEqual = false;
            break;
        }
        st.pop();
        q.pop();
    }

    isEqual ? cout << "YES" : cout << "NO";

    return 0;
}