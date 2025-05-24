#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }

        space--;
        printf("\n");
    }

    return 0;
}