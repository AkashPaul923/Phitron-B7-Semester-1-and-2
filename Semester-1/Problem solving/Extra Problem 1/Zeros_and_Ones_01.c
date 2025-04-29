#include <stdio.h>
int main()
{
    int n, num, zero = 0, one = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            zero++;
        }
        else if (num == 1)
        {
            one++;
        }
    }

    printf("%d %d", zero, one);

    return 0;
}