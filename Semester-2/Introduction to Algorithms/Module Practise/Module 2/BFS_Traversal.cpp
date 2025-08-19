#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void BFS_Traversal(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cout << p << " ";
        for (int c : adj_list[p])
        {
            if (vis[c] == false)
            {
                q.push(c);
                vis[c] = true;
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

    BFS_Traversal(0);

    return 0;
}