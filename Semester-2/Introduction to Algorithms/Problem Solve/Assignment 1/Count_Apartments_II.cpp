#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int n, m;
int cnt = 0;
vector<int> c;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == false && grid[i][j] != '#')
            {
                cnt = 0;
                dfs(i, j);
                c.push_back(cnt);
            }
        }
    }
    if (c.size() == 0)
    {
        cout << "0";
    }
    else
    {
        sort(c.begin(), c.end());
        for (int x : c)
        {
            cout << x << " ";
        }
    }

    return 0;
}