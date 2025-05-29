#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s, flag = 0;
        cin >> n >> s;

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[j] + arr[k] + arr[l] == s)
                    {
                        flag = 1;
                    }
                }
            }
        }

        flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}