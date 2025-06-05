#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int n, sum = 0;
        cin >> n >> s;
        int a[26] = {0};
        for (int j = 0; j < n; j++)
        {
            (a[s[j] - 'A'] == 0) ? a[s[j] - 'A'] += 2 : a[s[j] - 'A']++;
        }
        for (int j = 0; j < 26; j++)
        {
            sum += a[j];
        }
        cout << sum << endl;
    }

    return 0;
}