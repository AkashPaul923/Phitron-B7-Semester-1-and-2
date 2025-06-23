#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (pre[i - 1] == pre[n] - pre[i])
        {
            cout << i;
            break;
        }
    }

    return 0;
}