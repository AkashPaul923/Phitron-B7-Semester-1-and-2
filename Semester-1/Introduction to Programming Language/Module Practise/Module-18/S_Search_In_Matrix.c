#include <stdio.h>
int main()
{
    int m, n, x;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);

    int is_avail = 0;

    for (int i = 0; i < n && !is_avail; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                is_avail = 1;
                break;
            }
        }
    }

    if (is_avail)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}