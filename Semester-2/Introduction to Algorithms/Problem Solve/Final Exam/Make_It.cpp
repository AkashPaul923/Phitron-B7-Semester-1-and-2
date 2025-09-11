#include <bits/stdc++.h>
using namespace std;
bool dp[100005];

void make(int i)
{
    if (i > 100001)
        return;
    if (dp[i] == true)
        return;
    dp[i] = true;
    make(i + 3);
    make(i * 2);
}

int main()
{
    memset(dp, false, sizeof(dp));
    make(1);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (dp[n] == true ? "YES\n" : "NO\n");
    }

    return 0;
}