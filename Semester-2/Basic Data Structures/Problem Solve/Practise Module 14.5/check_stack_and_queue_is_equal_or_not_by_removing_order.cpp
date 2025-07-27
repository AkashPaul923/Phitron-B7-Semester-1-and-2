#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool isEqual = true;

    while (true)
    {
        if (st.empty() == true && q.empty() == true)
        {
            break;
        }
        if (st.empty() == true && q.empty() == false)
        {
            isEqual = false;
            break;
        }
        if (st.empty() == false && q.empty() == true)
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