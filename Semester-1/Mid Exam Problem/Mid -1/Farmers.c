#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d1, d2;
        scanf("%d %d %d", &m1, &m2, &d1);

        d2 = (m1 * d1) / (m1 + m2);

        printf("%d\n", d1 - d2);
    }

    return 0;
}