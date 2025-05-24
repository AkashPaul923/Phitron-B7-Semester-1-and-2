#include <stdio.h>
#include<limits.h>
int main()
{
    int n, pos = INT_MIN, min = INT_MAX;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            pos = i+1;
            min = arr[i];
        }
    }

    printf("%d %d", min, pos);

    return 0;
}