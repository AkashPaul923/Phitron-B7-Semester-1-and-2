#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adjMat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adjMat[i][j] = 1;
            else
                adjMat[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adjMat[a][b] = 1;
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        (adjMat[a][b] == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}