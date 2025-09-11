#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int dp[n + 5];
    for (int i = 0; i <= n; i++)
    {
        if (i == 0 || i == 1)
            dp[i] = i;
        else if (i == 2 || i == 3)
            dp[i] = i - 1;
        else
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }
    cout << dp[n];

    return 0;
}