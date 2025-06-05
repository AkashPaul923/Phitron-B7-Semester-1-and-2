#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        if (n % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                (a[j] % 2 == 0) ? even++ : odd++;
            }
            
            if (even > 0 && odd > 0)
            {
                cout << ((even >= odd) ? (even - odd) / 2 : (odd - even) / 2) << endl;
            }
            else
            {
                cout << ((even == 0) ? odd / 2 : even / 2) << endl;
            }
        }
    }

    return 0;
}