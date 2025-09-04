#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            pq.push({val, i});
        }
        int max1 = pq.top().second;
        pq.pop();
        int max2 = pq.top().second;
        if (max1 <= max2)
            cout << max1 << " " << max2 << endl;
        else
            cout << max2 << " " << max1 << endl;
    }

    return 0;
}