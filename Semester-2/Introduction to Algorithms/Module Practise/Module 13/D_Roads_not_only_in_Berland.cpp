#include <bits/stdc++.h>
using namespace std;
int parent[1005];
int group_size[1005];

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    if (leader1 == leader2)
        return;
    if (group_size[leader1] >= group_size[leader2])
    {
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
    vector<pair<int, int>> rmv;
    vector<pair<int, int>> crt;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            rmv.push_back({a, b});
        }
        else
        {
            dsu_union(a, b);
        }
    }
    for (int i = 2; i <= n; i++)
    {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);
        if (leaderA != leaderB)
        {
            crt.push_back({1, i});
            dsu_union(1, i);
        }
    }
    cout << crt.size() << endl;
    for (int i = 0; i < crt.size(); i++)
    {
        cout << rmv[i].first << " " << rmv[i].second << " " << crt[i].first << " " << crt[i].second << endl;
    }

    return 0;
}