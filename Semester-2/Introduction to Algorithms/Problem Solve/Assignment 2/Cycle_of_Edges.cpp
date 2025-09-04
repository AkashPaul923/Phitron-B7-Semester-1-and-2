#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];
int n, e;

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
    memset(parent, -1, sizeof(parent));
    memset(group_size, 1, sizeof(group_size));
    int count = 0;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
            count++;
        else
            dsu_union(a, b);
    }
    cout << count << endl;

    return 0;
}