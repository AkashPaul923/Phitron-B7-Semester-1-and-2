#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool vis[105];
int parent[105];
bool cycle;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj_list[p])
        {
            if (vis[c] && parent[p] != c)
                cycle = true;
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                parent[c] = p;
            }
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
            bfs(i);
    cout << (cycle ? "Cycle detected" : "Cycle not detected");

    return 0;
}