#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;
long long int dis[1005];
int n, e;
bool isCycle;

void bellman_ford()
{
    for (int i = 0; i < n; i++)
    {
        for (auto e : edge_list)
        {
            int a = e.a;
            int b = e.b;
            int c = e.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }
    for (auto e : edge_list)
    {
        int a = e.a;
        int b = e.b;
        int c = e.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            isCycle = true;
            break;
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;
    isCycle = false;
    bellman_ford();
    if (isCycle)
    {
        cout << "Negative Cycle Detected";
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;
            if (dis[d] == LLONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << dis[d] << endl;
        }
    }

    return 0;
}