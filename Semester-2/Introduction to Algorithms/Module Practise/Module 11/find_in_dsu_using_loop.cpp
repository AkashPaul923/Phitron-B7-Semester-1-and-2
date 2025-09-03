#include <bits/stdc++.h>
using namespace std;
int par[1005];

int find_dsu(int node)
{
    while (par[node] != -1)
    {
        cout << node << endl;
        node = par[node];
    }
    return node;
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