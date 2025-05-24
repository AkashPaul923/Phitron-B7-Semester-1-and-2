#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int row = 0, count = 0;

    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                flag++;
            }
        }
        if (flag > count)
        {
            row = i;
        }
    }
    printf("%d", row);

    return 0;
}