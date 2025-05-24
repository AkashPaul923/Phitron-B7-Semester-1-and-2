#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum_p = 0, sum_s = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                sum_p += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum_s += arr[i][j];
            }
        }
    }

    int total = abs(sum_p - sum_s);

    printf("%d", total);

    return 0;
}