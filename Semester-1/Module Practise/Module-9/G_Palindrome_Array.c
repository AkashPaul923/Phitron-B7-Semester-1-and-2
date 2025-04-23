#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = n - 1, pal = 0;

    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            pal = 0;
            break;
        }
        pal = 1;
        i++;
        j--;
    }

    if (pal == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}