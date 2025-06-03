#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int first_sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int last_sum = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        first_sum == last_sum ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}