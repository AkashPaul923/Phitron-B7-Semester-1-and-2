#include <bits/stdc++.h>
using namespace std;
long long int dp[40];

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (n == 2 || n == 3)
        return n - 1;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibonacci(n - 1) + fibonacci(n - 2) + fibonacci(n - 3) + fibonacci(n - 4);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}