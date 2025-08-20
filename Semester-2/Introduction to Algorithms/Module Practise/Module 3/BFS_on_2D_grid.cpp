#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void BFS_Traversal(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;

        cout << pi << " " << pj << endl;

        for (int i = 0; i < 4; i++)
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int si, sj;
    cin >> si >> sj;
    BFS_Traversal(si, sj);

    int di, dj;
    cin >> di >> dj;
    cout << "Distance From source -> " << level[di][dj];

    return 0;
}

// input formate
// 3 4
// . . . .
// . . . .
// . . . .
// 1 2
// 0 1