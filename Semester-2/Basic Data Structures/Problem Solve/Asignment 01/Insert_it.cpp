#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, pos;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cin >> pos;
    a.insert(a.begin() + pos, b.begin(), b.end());

    for (auto x : a)
    {
        cout << x << " ";
    }

    return 0;
}