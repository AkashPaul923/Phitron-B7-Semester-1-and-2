#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool vis[105];
int parent[105];
bool cycle;

void dfs(int src)
{
    vis[src] = true;
    for(int c : adj_list[src])
    {
        if (vis[c] && parent[src] != c)
            cycle = true;
        if(!vis[c])
        {
            parent[c] = src;
            dfs(c);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for (int i = 0; i < n; i++)
        if (!vis[i])
            dfs(i);
    cout << (cycle ? "Cycle detected" : "Cycle not detected");

    return 0;
}