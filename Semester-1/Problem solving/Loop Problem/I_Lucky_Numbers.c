#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int f = n / 10;
    int l = n % 10;

    if (l != 0 && (f % l == 0 || l % f == 0))
    {
        printf("YES");
    }
    else if (l == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}