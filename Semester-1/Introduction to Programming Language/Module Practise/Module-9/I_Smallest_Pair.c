#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                if (val < min)
                {
                    min = val;
                }
            }
        }

        printf("%d\n", min);
    }

    return 0;
}