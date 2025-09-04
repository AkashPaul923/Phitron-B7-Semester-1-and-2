#include <bits/stdc++.h>
using namespace std;

long long int adj_mat[105][105];
int n, e;

void floyd_warshall()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
            }
        }
    }
}

int main()
{
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj_mat[i][j] = 0;
            else
                adj_mat[i][j] = LLONG_MAX;
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (adj_mat[a][b] > c)
            adj_mat[a][b] = c;
    }

    floyd_warshall();

    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;
        if (adj_mat[s][d] == LLONG_MAX)
            cout << "-1" << endl;
        else
            cout << adj_mat[s][d] << endl;
    }

    return 0;
}