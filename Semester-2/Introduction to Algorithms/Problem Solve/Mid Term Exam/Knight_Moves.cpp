#include <bits/stdc++.h>
using namespace std;
int level[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    vis[si][sj] = true;
    level[si][sj] = 0;
    q.push({si, sj});
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int si, sj, di, dj;
        cin >> si >> sj >> di >> dj;
        memset(level, -1, sizeof(level));
        memset(vis, false, sizeof(vis));
        bfs(si, sj);
        cout << level[di][dj] << endl;
    }

    return 0;
}