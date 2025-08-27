#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dis[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    dis[src] = 0;
    q.push({src, dis[src]});
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parent_node = parent.first;
        int parent_dist = parent.second;
        for (auto child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_dist = child.second;
            if (parent_dist + child_dist < dis[child_node])
            {
                dis[child_node] = parent_dist + child_dist;
                q.push({child_node, dis[child_node]});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    int src;
    cin >> src;
    dijkstra(src);

    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;

    return 0;
}