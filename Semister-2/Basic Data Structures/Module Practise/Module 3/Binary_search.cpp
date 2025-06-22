#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;

    int l = 0, r = n - 1, flag = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == val)
        {
            flag = 1;
            break;
        }
        else if (a[mid] < val)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (flag == 1)
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    return 0;
}