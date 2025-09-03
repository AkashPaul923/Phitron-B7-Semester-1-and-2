#include <bits/stdc++.h>
using namespace std;
int par[1005];

int find_dsu(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = find_dsu(par[node]);
    return leader;
}

int main()
{
    memset(par, -1, sizeof(par));
    par[0] = 1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;
    cout << find_dsu(4);

    return 0;
}