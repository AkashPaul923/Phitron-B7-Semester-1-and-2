#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void DFS_Traversal(int src)
{
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])
        {
            DFS_Traversal(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            DFS_Traversal(i);
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}