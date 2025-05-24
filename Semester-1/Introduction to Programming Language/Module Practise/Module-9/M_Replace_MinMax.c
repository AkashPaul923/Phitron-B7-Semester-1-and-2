#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN, min = INT_MAX, max_i = -1, min_i = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
    }

    arr[max_i] = min;
    arr[min_i] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}