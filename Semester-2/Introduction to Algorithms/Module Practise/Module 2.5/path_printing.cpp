#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void BFS_Traversal(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : adj_list[p])
        {
            if (vis[c] == false)
            {
                q.push(c);
                vis[c] = true;
                level[c] = level[p] + 1;
                parent[c] = p;
            }
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
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    BFS_Traversal(src);
    vector<int> path;
    int node = dst;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for(int x : path)
    {
        cout << x << " ";
    }

    return 0;
}