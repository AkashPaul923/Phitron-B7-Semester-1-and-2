#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dis[105];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dis[src] = 0;
    pq.push({ dis[src], src});
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int parent_node = parent.second;
        int parent_dist = parent.first;
        for (auto child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_dist = child.second;
            if (parent_dist + child_dist < dis[child_node])
            {
                dis[child_node] = parent_dist + child_dist;
                pq.push({ dis[child_node], child_node});
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