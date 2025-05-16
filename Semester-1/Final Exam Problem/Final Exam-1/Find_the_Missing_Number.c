#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int d = m / (a * b * c);

        if (a * b * c * d == m)
        {
            printf("%lld\n", d);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}