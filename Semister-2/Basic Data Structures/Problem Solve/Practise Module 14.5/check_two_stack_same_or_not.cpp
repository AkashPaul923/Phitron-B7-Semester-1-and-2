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

int main()
{
    myStack st1, st2;
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    bool isEqual = true;

    while (true)
    {
        if (st1.empty() == true && st2.empty() == true)
        {
            break;
        }
        if (st1.empty() == true && st2.empty() == false)
        {
            isEqual = false;
            break;
        }
        if (st1.empty() == false && st2.empty() == true)
        {
            isEqual = false;
            break;
        }
        if (st1.top() != st2.top())
        {
            isEqual = false;
            break;
        }
        st1.pop();
        st2.pop();
    }

    isEqual ? cout << "YES" : cout << "NO";

    return 0;
}