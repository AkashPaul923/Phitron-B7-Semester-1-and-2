#include <stdio.h>

int max_num(int arr[], int i, int n)
{
    if (i == n -1)
    {
        return arr[i];
    }

    int max_n = max_num(arr, i + 1, n);

    if (arr[i] >= max_n)
    {
        return arr[i];
    }
    else
    {
        return max_n;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_n = max_num(arr, 0, n);

    printf("%d", max_n);

    return 0;
}