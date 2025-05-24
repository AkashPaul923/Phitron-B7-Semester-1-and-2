#include <stdio.h>
#include<math.h>
int main()
{
    int n, pos = -1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int val;
    scanf("%d", &val);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}