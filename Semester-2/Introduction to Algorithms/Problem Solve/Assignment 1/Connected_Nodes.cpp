#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adjList[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        if (adjList[q].size() == 0)
        {
            cout << "-1";
        }
        else
        {
            sort(adjList[q].begin(), adjList[q].end(), greater<int>());
            for (int x : adjList[q])
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }

    return 0;
}