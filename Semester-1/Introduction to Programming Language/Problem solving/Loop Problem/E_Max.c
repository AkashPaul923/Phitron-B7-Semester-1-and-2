#include <stdio.h>
#include<limits.h>
int main()
{
    int n, x, max = INT_MIN ;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);

    return 0;
}