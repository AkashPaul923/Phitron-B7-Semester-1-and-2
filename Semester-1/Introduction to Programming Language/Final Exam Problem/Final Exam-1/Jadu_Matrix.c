#include <stdio.h>
#include <stdbool.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_jadu_Matrix = true;

    if (m == n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == m - 1)
                {
                    if (arr[i][j] != 1)
                    {
                        is_jadu_Matrix = false;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        is_jadu_Matrix = false;
                    }
                }
            }
        }
    }
    else
    {
        is_jadu_Matrix = false;
    }

    if (is_jadu_Matrix)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}